/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:33 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/18 21:43:24 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <stdexcept>

class PmergeMe
{
    private:
        int errn;
        std::string pmerge;
        std::deque<int> deque;
        std::vector<int> vector;
        std::list<int> list;
        PmergeMe( void );
    public:
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& op);
        PmergeMe& operator=(const PmergeMe& op);
        ~PmergeMe();
    public:
        void extract( void );
        std::vector<int> extractVector( void );
        std::list<int> extractList( void );
        void mergeVector(std::vector<int> v, int b, int e);
    private:
        void mergeVector(std::vector<int> v, int b, int m, int e);
    public:
        void showUnsortedArray( void );
        void lookVector( void );
        void lookList( void );
    public:
        template <typename T>
        void insertionSortOf(T& massive)
        {
            for(size_t i = 0; i < massive.size(); i++)
            {
                int pos = i - 1;
                int key = massive[i];
                while (pos >= 0 && massive[pos] > key)
                {
                    massive[pos + 1] = massive[pos];
                    pos--;
                }
                massive[pos + 1] = key;
            }
        }
    private:
        void bind(char **av);
        void swap(int &a, int &b);
};


#endif