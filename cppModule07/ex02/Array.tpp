/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:05:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/28 17:25:19 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> Array<T>::Array( void )
{
    this->array = new T[1];
    len = 0;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    this->len = n;
    this->array = new T[n];
}

template<typename T>
Array<T>::Array(const Array& op)
{
    this->len = op.size();
    this->array = new T[op.size()];
    for(unsigned int i = 0; i < this->size(); i++)
        this->array[i] = op[i];
}

template<typename T>
template <typename U>
Array<T>::Array(const Array<U>& op)
{
    this->len = op.size();
    this->array = new T[op.size()];
    for(unsigned int i = 0; i < this->size(); i++)
        this->array[i] = op[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& op)
{
    if (this != &op)
    {
        delete [] array;
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

template <typename T> unsigned int Array<T>::size( void ) const 
{
    return (this->len);
}

template <typename T> T& Array<T>::operator[](unsigned int index)
{
    if (index >= len)
        throw std::out_of_range("Out of range");
    return (*(array + index));
}

template <typename T> T Array<T>::operator[](unsigned int index) const
{
    if (index >= len)
        throw std::out_of_range("Out of range");
    return (*(array + index));
}