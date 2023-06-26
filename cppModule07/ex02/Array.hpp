/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:26:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/26 15:22:38 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_HPP
#define ARR_HPP
#include <iostream>

template <typename T> class Array
{
    private:
        T* array;
        unsigned int len;
        unsigned int capacity;
    public:
        Array<T>( void );
        Array<T>(unsigned int n);
        Array<T>(Array<T>& op);
        Array<T>& operator=(Array<T>& op);
        ~Array<T>( void );
    public:
        unsigned int size( void );
    protected:
};

#ifndef TEMP_TPP
#define TEMP_TPP
#include "Array.tpp"
#endif
#endif