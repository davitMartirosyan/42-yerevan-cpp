/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:33 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/16 16:08:14 by dmartiro         ###   ########.fr       */
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
        std::vector<int> vector;
        std::deque<int> deque;
        std::list<int> list;
    public:
        PmergeMe( void );
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& op);
        PmergeMe& operator=(const PmergeMe& op);
        ~PmergeMe();
    public:
        void bind(char **av);
        void extract( void );
    public:
        void showUnsortedArray( void );
        void lookVector( void );
        void lookList( void );
};

#endif