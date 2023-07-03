/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:38:42 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/03 23:01:05 by dmartiro         ###   ########.fr       */
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
    return (0);
}