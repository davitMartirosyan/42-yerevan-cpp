/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:26:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/26 01:17:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_HPP
#define ARR_HPP
#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int length;
        int capacity;
    public:
        Array<T>( void );
        Array<T>(unsigned int n);
        ~Array<T>();
    public:
        int size( void );
};

#ifndef TEMP_TPP
#define TEMP_TPP
#include "Array.tpp"
#endif
#endif