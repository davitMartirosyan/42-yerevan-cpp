/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:15:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/15 22:59:14 by dmartiro         ###   ########.fr       */
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
            DOUBLE,
            UNDEFINED
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
    private:
        static void printCasts( void );
        static void casting( void );
        static void printChar( void );
        static void printInt( void );
        static void printFloat( void );
        static void printDouble( void );
    private:
        class ConvertErrException : public std::exception
        {
            virtual const char *what() const throw();
        };
};

#endif