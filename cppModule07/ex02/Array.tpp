/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:05:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/26 15:28:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array( void )
{
    capacity = 1;
    len = 0;
    this->array = new T[capacity];
    this->array[0] = 0;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    for(int i = 0; i < n; i++)
        this->array[i] = 0;
    capacity = n;
}

template <typename T> Array<T>::Array(Array<T>& op)
{
    this->capacity = op.capacity;
    this->len = op.len;
    this->array = new T[this->capacity];
    for(int i = 0; i < this->capacity; i++)
        this->array[i] = op[i];
}

template <typename T> Array<T>& Array<T>::operator=(Array<T>& op)
{
    if (this != op)
    {
        this->capacity = op.capacity;
        this->len = op.len;
        this->array = new T[this->capacity];
        for(int i = 0; i < this->capacity; i++)
            this->array[i] = op[i];
    }
    return (*this);
}