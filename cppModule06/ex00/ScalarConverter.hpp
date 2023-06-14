/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:15:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/14 11:18:13 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <string>
#include <climits>
#include <stdexcept>
#include <limits>
#include <cfloat>
#include <cmath>
#include <cctype>
#include <locale>
#include <cstdlib>
#include <iomanip>

class ScalarConverter
{
    private:
        static std::string str;
        static double lit;
        static int type;
        enum types
        {
            LITERAL = 1,
            CHAR,
            INT,
            FLOAT,
            DOUBLE
        };
    public:
        ScalarConverter( void );
        ScalarConverter(const ScalarConverter& op);
        ScalarConverter& operator=(const ScalarConverter& op);
        ~ScalarConverter();
        static void convert(char * literal);
    private:
        static bool isLiteral(const char *literal);
        static bool isChar( void );
        static bool isFloat( void );
        static bool isDouble( void );
        static bool isInt( void );
};

#endif