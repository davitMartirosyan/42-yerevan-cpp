/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:15:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/09 07:13:42 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <ctype.h>
#include <stdio.h>

class ScalarConverter
{
    private:
        bool cidf;
        char c;
        int i;
        float f;
        double d;
    public:
        ScalarConverter( void );
        ScalarConverter(const ScalarConverter& op);
        ScalarConverter& operator=(const ScalarConverter& op);
        ~ScalarConverter();
    public:
        void convert(std::string literal);
    public:
        void Char( void );
        // int isInt(std::string i);
        // int isFloat(std::string f);
        // int isDouble(std::string d);
    public:
        char getChar( void );
        int getInt( void );
        float getFloat( void );
        double getDouble( void );
};

#endif