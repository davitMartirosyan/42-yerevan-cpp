/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:29:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/07 13:49:38 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int n;
        std::vector<int> span;
        Span( void );
    public:
        Span(unsigned int n);
        Span(const Span& op);
        Span& operator=(const Span& op);
        int& operator[](int index);
        int operator[](int index) const;
        ~Span();
    public:
        void addNumber(int val);
        int shortestSpan( void );
        int longestSpan( void );
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    private:
        void qsort(std::vector<int>&cp, int min, int max);
        void swap(int &a, int &b);
        int part(std::vector<int>&cp, int min, int max);
};

#endif