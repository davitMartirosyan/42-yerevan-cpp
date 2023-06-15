/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:18:26 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/15 22:59:17 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::str;
double ScalarConverter::lit = 0.0;
int ScalarConverter::type = 0;

ScalarConverter::ScalarConverter( void )
{
}


ScalarConverter::ScalarConverter(const ScalarConverter& op)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& op)
{
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}



bool ScalarConverter::isLiteral(const char *literal)
{
    if (str.size() >= 3 && str.size() <= 5)
    {
        if (lit == INFINITY || lit == -INFINITY || lit != lit)
            return (true);
    }
    return (false);
}

bool ScalarConverter::isChar( void )
{
    if (str.size() == 1 && !std::isdigit(str[0]) && std::isprint(str[0]))
        return (true);
    return (false);
}

bool ScalarConverter::isInt( void )
{
    int s = 0;
    int size = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-' || str[i] == '+')
            s++;
        if (std::isdigit(str[i]))
            size++;
    }
    if (s <= 1 && str.size() == (size + s))
        return (true);
    return (false);
}

bool ScalarConverter::isFloat( void )
{
    int d = 1;
    int s = 0;
    int size = 0;
    if (str.front() == '0' && str[1] != '.')
        return (false);
    for(int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.' && size++)
            d <<= 1;
        if (str[i] == '+' || str[i] == '-')
            s++;
        if (std::isdigit(str[i]))
            size++;
    }
    if (d == 2 && s <= 1 && (size + s + 1) == str.size() && 
        (str.back() == 'f' && std::isdigit(str[str.size() - 2])))
        return (true);
    return (false);
}


bool ScalarConverter::isDouble( void )
{
    int d = 1;
    int s = 0;
    int size = 0;
    if (str.front() == '0' && str[1] != '.')
        return (false);
    for(int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.' && size++)
            d <<= 1;
        if (str[i] == '+' || str[i] == '-')
            s++;
        if (std::isdigit(str[i]))
            size++;
    }
    if (d == 2 && s <= 1 && (size + s) == str.size() && std::isdigit(str.back()))
        return (true);
    return (false);
}

void ScalarConverter::convert(char * literal)
{
    if (literal == NULL)
        return ;
    char *endl;
    std::cout << std::fixed <<  std::setprecision(1);
    str = literal;
    lit = std::strtod(literal, &endl);
    if (str.empty())
        return ;
    if (isLiteral(literal))
        type = LITERAL;
    else if (isInt())
        type = INT;
    else if (isChar())
        type = CHAR;
    else if (isFloat())
        type = FLOAT;
    else if (isDouble())
        type = DOUBLE;
    else
        throw ConvertErrException();
    casting();
}

void ScalarConverter::printCasts( void )
{
    printChar();
    printInt();
    printFloat();
    printDouble();
}

void ScalarConverter::casting( void )
{
    char *endl;
    lit = std::strtod(str.c_str(), &endl);
    switch (type)
    {
        case INT:
        {
           printCasts();
           break;
        }
        case LITERAL:
        {
            printCasts();
            break;
        }
        case CHAR:
        {
            printCasts();
            break;
        }
        case FLOAT:
        {
            printCasts();
            break;
        }
    }
}

void ScalarConverter::printChar( void )
{
    std::cout << "char: ";
    if ((type == INT || type == FLOAT || type == DOUBLE) && std::isprint((char)lit))
        std::cout << static_cast<char>(lit) << std::endl;
    else if (type == INT && !std::isprint((char)lit))
        std::cout << "Non displayable" << std::endl;
    else if (type == LITERAL)
        std::cout << "impossible" << std::endl;
    else if (type == CHAR)
        std::cout << str[0] << std::endl;
}

void ScalarConverter::printInt( void )
{
    std::cout << "int: ";
    if ((type == INT || type == LITERAL || (int)lit > INT_MAX || (int)lit < INT_MIN))
        std::cout << "impossible" << std::endl;
    else if (type == CHAR)
        std::cout << static_cast<int>(str[0]) << std::endl;
    else if (type == INT || type == FLOAT)
        std::cout << static_cast<int>(lit) << std::endl;
}

void ScalarConverter::printFloat( void )
{
    std::cout << "float: ";
    if (type == CHAR)
        std::cout << static_cast<float>(str[0]) << "f" << std::endl;
    else
        std::cout << static_cast<float>(lit) << "f" << std::endl;
}

void ScalarConverter::printDouble( void )
{
    std::cout << "double: ";
    if (type == CHAR)
        std::cout << static_cast<double>(str[0]) << std::endl;
    else
        std::cout << static_cast<double>(lit) << std::endl;
}

const char* ScalarConverter::ConvertErrException::what( void ) const throw()
{
    return ("Passed Parameter isn't convertable");   
}