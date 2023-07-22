/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:33 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/22 18:08:30 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <stdexcept>
#include <iomanip>
#include <cstdlib>
#include <sys/time.h>

class PmergeMe
{
    private:
        int* massiveDynamics;
        static bool allocated;
        static size_t errn;
        static size_t numberCount;
        static int threshold;
        std::string pmerge;
        PmergeMe( void );
    public:
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& op);
        PmergeMe& operator=(const PmergeMe& op);
        ~PmergeMe();
    public:
        void extract( void );
        std::string before( void );
        std::vector<int> extractAsVector( void );
        std::deque<int> extractAsDeque( void );
        std::list<int> extractList( void );
        void getUnsorted( void );
        void getSorted(std::vector<int>&sorted);
    private:
        void bind(char **av);
        std::string ltrim(const std::string &s);
        std::string rtrim(const std::string &s);
        std::string trim(const std::string &s);
    private:
        //vector Sorting
        void mergeSortVector(std::vector<int>&massive, int b, int m, int e);
        void insertionSortVector(std::vector<int>&massive, int b, int e);
        //deque Sorting
        void mergeSortDeque(std::deque<int>&massive, int b, int m, int e);
        void insertionSortDeque(std::deque<int>&massive, int b, int e);
    public:
        void mergeSortVector(std::vector<int>&massive, int b, int e);
        void mergeSortDeque(std::deque<int>&massive, int b, int e);
    public:
        double getTime(struct timeval& start, struct timeval& end);
};

#endif