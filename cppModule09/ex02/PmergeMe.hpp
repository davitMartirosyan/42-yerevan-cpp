/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:33 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/19 21:35:53 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <stdexcept>
#include <ctime>
#include <iomanip>

class PmergeMe
{
    private:
        int* massive;
        static bool allocated;
        static size_t errn;
        static size_t numberCount;
        static size_t threshold;
        std::string pmerge;
        PmergeMe( void );

        struct timeval _startTimeV;
		struct timeval _endTimeV;
		struct timeval _startTimeL;
		struct timeval _endTimeL;
    public:
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& op);
        PmergeMe& operator=(const PmergeMe& op);
        ~PmergeMe();
    public:
        void printDuration();
        void extract( void );
        std::string before( void );
        std::vector<int> extractVector( void );
        std::deque<int> extractDeque( void );
        std::list<int> extractList( void );
    private:
        void bind(char **av);
        std::string ltrim(const std::string &s);
        std::string rtrim(const std::string &s);
        std::string trim(const std::string &s);
    private:
        template <typename T>
        void insertionSortOf(T& massive, int b, int e)
        {
            for(int i = b + 1; i < e; i++)
            {
                int pos = i - 1;
                int key = massive[i];
                while (pos >= b && massive[pos] > key)
                {
                    massive[pos + 1] = massive[pos];
                    pos--;
                }
                massive[pos + 1] = key;
            }
        }
        template <typename T>
        void mergeSortOf(T& massive, int b, int e)
        {
            if (b < e)
            {
                int m = b + (e - b) / 2;
                if ((size_t)(e - b) > threshold)
                {
                    mergeSortOf(massive, b, m);
                    mergeSortOf(massive, m+1, e);
                    merge(massive, b, m, e);
                }
                else
                    insertionSortOf(massive, b, e);
            }
        };
        template <typename T>
        void merge(T& massive, int b, int m, int e)
        {
            T leftHand(m - b + 1);
            T rightHand(e - m);

            for(size_t i = 0; i < leftHand.size(); i++)
                leftHand[i] = massive[b + i];

            for(size_t i = 0; i < rightHand.size(); i++)
                rightHand[i] = massive[m + 1 + i];
            
            size_t lhs = 0;
            size_t rhs = 0;
            size_t ms = b;
            while (lhs < leftHand.size() && rhs < rightHand.size())
            {
                if (leftHand[lhs] <= rightHand[rhs])
                {
                    massive[ms] = leftHand[lhs];
                    ++lhs;
                }
                else
                {
                    massive[ms] = rightHand[rhs];
                    ++rhs;
                }
                ++ms;
            }

            while (lhs < leftHand.size())
            {
                massive[ms] = leftHand[lhs];
                ++lhs;
                ++ms;
            }
            
            while (rhs < rightHand.size())
            {
                massive[ms] = rightHand[rhs];
                ++rhs;
                ++ms;
            }
        }
    public:
        template <typename T>
        void sort(T& massive, int b, int e)
        {
            if (massive.size() > threshold)
                mergeSortOf(massive, b, e);
            else
                insertionSortOf(massive, b, e);
        };
};

#endif