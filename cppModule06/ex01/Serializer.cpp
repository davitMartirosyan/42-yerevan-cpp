/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 04:18:16 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/16 06:57:17 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void )
{
}

Serializer::Serializer(const Serializer& op)
{
    (void)op;
}

Serializer& Serializer::operator=(const Serializer& op)
{
    (void)op;
    return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t encode = reinterpret_cast<uintptr_t>(ptr);
    return (encode);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data * decode = reinterpret_cast<Data*>(raw);
    return (decode);
}