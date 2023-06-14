/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:18:26 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/14 17:02:26 by dmartiro         ###   ########.fr       */
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
    int size = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if (std::isdigit(str[i]))
            size++;
    }
    if (str.size() == size)
        return (true);
    return (false);
}

bool ScalarConverter::isFloat( void )
{
    int d = 0;
    int size = 0;
    if (str.front() == '0')
        return (false);
    for(int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.' || str[i] == '+' || str[i] == '-')
        {
            ++d;
            continue;
        }
        else if (std::isdigit(str[i]))
            size++;
    }
    size+=d+1;
    std::cout << str.size() << " : " << size << std::endl;
    if (str.back() == 'f' && str.size() == size)
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
    {
        type = LITERAL;
        std::cout << "is literal" << std::endl;
    }
    else if (isInt())
    {
        type = INT;
        std::cout << "is int" << std::endl;
    }
    else if (isChar())
    {
        type = CHAR;    
        std::cout << "is char" << std::endl;
    }
    else if (isFloat())
    {
        type = FLOAT;
        std::cout << "is floating point" << std::endl;
    }
    // else if (isDouble())
    //     type = DOUBLE;
    
}
