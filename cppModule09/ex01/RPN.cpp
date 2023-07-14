/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:10:06 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/14 16:14:30 by dmartiro         ###   ########.fr       */
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
    if (m.find_first_not_of(symbols) != std::string::npos)
        throw std::runtime_error("Incorrect Symbols");
    else
    {
        std::string n;
        for(size_t i = 0; i < m.size(); i++)
        {
            if (std::isdigit(m.at(i)))
                n += m.at(i);
            else if (!n.empty())
            {
                stack.push(std::atoi(n.c_str()));
                n.clear();
            }
            if (m[i] == '-' || m[i] == '+' || m[i] == '*' || m[i] == '/')
                    operation(m[i]);
        }
    }
    std::cout << stack.top() << std::endl;
}

bool RPN::hasExessNumbers( void )
{
    int operators = 0;
    int numbers = 0;
    std::string n;
    for(size_t i = 0; i < m.size(); i++)
    {
        if (std::isdigit(m.at(i)))
            n += m.at(i);
        else if (!n.empty())
        {
            numbers++;
            n.clear();
        }
        if (m.at(i) == '+' || m.at(i) == '-' || m.at(i) == '*' || m.at(i) == '/')
            operators++;
    }
    if ((numbers - operators) == 1)
        return (1);
    else
        throw std::runtime_error("Syntax Error");
}

void RPN::operation(char op)
{
    void (RPN::*func[4])( void ) = { &RPN::add, &RPN::sub, &RPN::mult, &RPN::div }; 
    int operators[4] = {'+', '-', '*', '/'};
    int i = -1;
    while(++i != 4 && operators[i] != op){}
    (this->*func[i])();
}

void RPN::add( void )
{
    l = stack.top();
    stack.pop();
    r = stack.top();
    stack.push(l + r);
}

void RPN::sub( void )
{
    l = stack.top();
    stack.pop();
    r = stack.top();
    stack.push(l - r);
}

void RPN::mult( void )
{
    l = stack.top();
    stack.pop();
    r = stack.top();
    stack.push(l * r);    
}

void RPN::div( void )
{
    l = stack.top();
    stack.pop();
    r = stack.top();
    stack.push(l / r);
}