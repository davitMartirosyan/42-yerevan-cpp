/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:38:42 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/07 14:02:24 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
}

Span::Span(unsigned int n)
    : n(n)
{
    span.reserve(this->n);
}

Span::Span(const Span& op)
    : n(op.n), span(op.span)
{
}


Span& Span::operator=(const Span& op)
{
    if (this != &op)
    {
        this->span = op.span;
        this->n = op.n;
    }
    return (*this);
}

int& Span::operator[](int index)
{
    return (span[index]);
}

int Span::operator[](int index) const
{
    return (span[index]);
}

Span::~Span()
{
}

void Span::addNumber(int val)
{
    if (span.size() < n)
        span.push_back(val);
    else
        throw std::out_of_range("Size greather than sizeof reserved place");
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator cpbegin = begin;
    for(; cpbegin != end; cpbegin++)
    {
        this->span.push_back(*cpbegin);
    }
}

int Span::longestSpan( void )
{
    if (span.size() <= 1)
        throw std::out_of_range("Span is to short");
    int min = span[0];
    int max = span[0];
    std::vector<int>::iterator it;
    for(it = this->span.begin(); it != this->span.end(); it++)
    {
        if (*it <= min)
            min = *it;
        if (*it >= max)
            max = *it;
    }
    return (max - min);
}

int Span::shortestSpan( void )
{
    if (span.size() <= 1)
        throw std::out_of_range("Span is to short");
    std::vector<int>cpy(this->span);
    qsort(cpy, 0, cpy.size() - 1);
    int min = INT_MAX;
    for(std::vector<int>::iterator it = cpy.begin(); it < cpy.end(); it++)
    {
        if ((it + 1) != cpy.end())
        {
            int sp = *(it + 1) - *(it);
            if (sp < min)
                min = sp;
        }
    }
    return (min);
}

void Span::qsort(std::vector<int>&cp, int min, int max)
{
    if (min < max)
    {
        int pi = part(cp, min, max);
        qsort(cp, min, pi - 1);
        qsort(cp, pi + 1, max);
    }
}

int Span::part(std::vector<int>&cp, int min, int max)
{
    int pivot = cp[max];
    int i = (min - 1);
    for(int j = min; j <= max - 1; j++)
    {
        if (cp[j] < pivot)
        {
            i++;
            swap(cp[i], cp[j]);
        }
    }
    swap(cp[i + 1], cp[max]);
    return (i + 1);
}

void Span::swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}