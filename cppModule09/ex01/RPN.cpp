/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:10:06 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/13 23:28:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

const std::string& RPN::symbols = "0123456789 -+/*";

RPN::RPN( void )
    : m("")
{
}

RPN::RPN(char **v)
    : m(mathString(v))
{ 
}

RPN::RPN(const RPN& op)
    : m(op.m)
{
    *this = op;
}

RPN& RPN::operator=(const RPN& op)
{
    (void)op;
    return (*this);
}

RPN::~RPN()
{
}

const std::string RPN::mathString(char** vector)
{
    std::string mathStr;
    int i = 1;
    while(vector[i])
    {
        mathStr += vector[i];
        mathStr += " ";
        i++;
    }
    return (mathStr);
}

void RPN::filter( void )
{
    // int operators = 0;
    int numbers = 0;
    if (m.find_first_not_of(symbols) != std::string::npos)
        throw std::runtime_error("Incorrect Symbols");
    else
    {
        for(size_t i = 0; i < m.size(); i++)
        {
            if (std::isdigit(m.at(i)))
            {
                numbers++;
                // find numbers and operators
            }
        }
    }
}