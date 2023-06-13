/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:15:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/13 07:22:11 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <string>
#include <climits>
#include <cfloat>
#include <cmath>
#include <cctype>
#include <locale>
enum types
{
  OK = 1,
  ERR,
  LITEAL,
  CHAR,
  INT,
  FLOAT,
  DOUBLE  
};


class ScalarConverter
{
    private:
        static std::string str;
        static double lit;
        static int status; // 1 2 3 4
    public:
        ScalarConverter( void );
        ScalarConverter(const ScalarConverter& op);
        ScalarConverter& operator=(const ScalarConverter& op);
        ~ScalarConverter();
    public:
        static void convert(char * literal);
        static void possibilities( void );
        static bool isLiteral( void );
        static void Char( void );
        static void Int( void );
};

#endif