/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:18:26 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/09 07:33:38 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

void ScalarConverter::convert(std::string literal)
{
    
}

char ScalarConverter::getChar( void ) {return (this->c);}
int ScalarConverter::getInt( void ) {return (this->i);}
float ScalarConverter::getFloat( void ) {return (this->f);}
double ScalarConverter::getDouble( void ) {return (this->d);}


 void ScalarConverter::Char( void )
{
    
}