/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:18:26 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/13 07:30:04 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::str;
double ScalarConverter::lit = 0.0;
int ScalarConverter::status = 0;

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

void ScalarConverter::possibilities( void )
{
    try
    {
        lit = std::stod(str);
        status = 1;
    }
    catch(...)
    {
        status = 2;
    }
}

bool ScalarConverter::isLiteral( void )
{
    if (str.size() == 3 || (str.size() == 4 && (str[0] == '+' || str[0] == '-')))
    {
        if (lit == INFINITY || lit == -INFINITY || str == "nan" \
            || str == "+nan" || str == "-nan")
            return (true);
    }
    return (false);
}

void ScalarConverter::convert(char * literal)
{
    if (literal == NULL)
        return ;
    str = literal;
    possibilities();
    if (isLiteral())
        status = 3;
    Char();
    Int();
}

void ScalarConverter::Int( void )
{
    if (status == 3)
        std::cout << "int: impossible" << std::endl;
    else if ((int)lit > std::numeric_limits<int>::max() || (int)lit < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(lit) << std::endl;
}

void ScalarConverter::Char( void )
{
    if (status == 3)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint((int)lit))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(lit) << "'" << std::endl;
}