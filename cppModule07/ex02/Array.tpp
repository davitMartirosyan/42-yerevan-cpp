/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:05:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/27 04:26:44 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array( void )
{
    len = 0;
    this->array = new T[1];
}

template <typename T> Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    len = n;
}

template <typename T> Array<T>::Array(Array<T>& op)
{
    this->len = op.len;
    this->array = new T[this->len];
    for(unsigned int i = 0; i < this->len; i++)
        this->array[i] = op[i];
}

template <typename T> Array<T>& Array<T>::operator=(Array<T>& op)
{
    if (this != &op)
    {
        this->len = op.len;
        this->array = new T[this->len];
        for(unsigned int i = 0; i < this->len; i++)
            this->array[i] = op[i];
    }
    return (*this);
}

template <typename T> Array<T>::~Array()
{
    delete [] array;
}

template <typename T> unsigned int Array<T>::size( void )
{
    return (this->len);
}

template <typename T> T& Array<T>::operator[](unsigned int index) const
{
    if (index >= len)
        throw std::out_of_range("Out of range");
    return (*(array + index));
}