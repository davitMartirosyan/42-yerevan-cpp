/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:26:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/27 04:22:55 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_HPP
#define ARR_HPP
#include <iostream>
#include <stdexcept>

template <typename T> class Array
{
    private:
        T* array;
        unsigned int len;
    public:
        Array<T>( void );
        Array<T>(unsigned int n);
        Array<T>(Array<T>& op);
        Array<T>& operator=(Array<T>& op);
        ~Array<T>( void );
        T& operator[](unsigned int index) const;
    public:
        unsigned int size( void );
};

#ifndef TEMP_TPP
#define TEMP_TPP
#include "Array.tpp"
#endif
#endif