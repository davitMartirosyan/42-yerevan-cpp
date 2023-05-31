/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:58:19 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 12:08:15 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>

class ScalarConverter
{
    private:
        int value;
    public:
        ScalarConverter( void );
        ScalarConverter(const std::string& txt);
        ScalarConverter(const ScalarConverter& op);
        ScalarConverter& operator=(const ScalarConverter& op);
        ~ScalarConverter();
    public:
        void convert(const std::string& argument);
};

#endif