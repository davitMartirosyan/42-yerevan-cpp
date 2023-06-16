/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 02:33:07 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/16 04:19:39 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
#define _SERIALIZER_HPP_
#include <iostream>
#include <cstdint>

struct Data
{
    int x;
    int y;
    int z;
    int len;
};

class Serializer
{
    public:
        Serializer( void );
        Serializer(const Serializer& op);
        Serializer& operator=(const Serializer& op);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif