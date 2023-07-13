/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:10:06 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/13 21:47:29 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void )
    : arithmetic_string("")
{
}

RPN::RPN(char **v)
    : arithmetic_string(mathString(v))
{
    std::cout << ":" <<  arithmetic_string << ":" << std::endl;   
}

RPN::RPN(const RPN& op)
    : arithmetic_string(op.arithmetic_string)
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

int RPN::filter( void )
{
    return (1);
}