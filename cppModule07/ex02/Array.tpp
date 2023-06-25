/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:05:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/26 01:22:17 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array( void )
{
     array = new T();
}

template <typename T> Array<T>::Array(unsigned int n)
{
    array = new T[n];
    for(unsigned int i = 0; i < n; i++)
        array[i] = 0;
}

template <typename T> Array<T>::~Array()
{
    delete [] array;
}

template <typename T> int Array<T>::size( void )
{
    return (this->length);
}