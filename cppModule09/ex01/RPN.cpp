/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:10:06 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/15 16:02:56 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int RPN::items = 0;
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

void RPN::extract( void )
{
    if (m.find_first_not_of(symbols) != std::string::npos)
        throw std::runtime_error("Error");
    else if (filter())
    {
        for(size_t i = 0; i < m.size(); i++)
        {
            if (std::isdigit(m[i]))
            {
                items++;
                stack.push(std::atoi(&m[i]));
            }
            else if (m[i] == '+' || m[i] == '-' || m[i] == '*' || m[i] == '/')
                operation(m[i]);      
        }
    }
}

bool RPN::filter( void )
{
    int operators = 0;
    int numbers = 0;
    for(size_t i = 0; i < m.size(); i++)
    {
        if (std::isdigit(m[i]))
        {
            if (std::isdigit(m[i+1]))
                throw std::runtime_error("Use numbers < than 10");
            else
                numbers++;
        }
        if (m[i] == '-' || m[i] == '+' || m[i] == '*' || m[i] == '/')
            operators++;
    }
    if ((numbers - operators) == 1)
        return (1);
    else
        throw std::runtime_error("Syntax Error");
}

void RPN::operation(char op)
{
    int i = -1;
    void (RPN::*func[4])( void ) = { &RPN::add, &RPN::sub, &RPN::mult, &RPN::div }; 
    int operators[4] = {'+', '-', '*', '/'};
    if (items <= 1)
        throw std::runtime_error("Syntax Error");
    take();
    while(++i != 4 && operators[i] != op){}
    (this->*func[i])();
    items++;
}

void RPN::take( void )
{
    l = stack.top();
    stack.pop();
    items--;
    r = stack.top();
    items--;
}

void RPN::add( void )
{
    stack.push(l + r);
}

void RPN::sub( void )
{
    stack.push(r - l);
}

void RPN::mult( void )
{
    stack.push(l * r);
}

void RPN::div( void )
{
    stack.push(r / l);
}

int RPN::inFixResult( void )
{
    if (!stack.empty())
        return (stack.top());
    throw std::runtime_error("Error");
}
