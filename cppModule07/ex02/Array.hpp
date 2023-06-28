/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:26:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/28 15:00:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>
#include <iomanip>

template <typename T>
class Array
{
    private:
        T* array;
        unsigned int len;
    public:
        Array( void );
        Array(unsigned int n);
        Array(const Array& op);
        template <typename U>Array(const Array<U>& op);
        Array& operator=(const Array& op);
        ~Array( void );
        T& operator[](unsigned int index);
        T operator[](unsigned int index) const;
    public:
        unsigned int size( void ) const;
};

#include "Array.tpp"
#endif