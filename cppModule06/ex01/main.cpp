/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 02:29:57 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/16 07:07:54 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void )
{
    Data ptr = {2, 4, 6, 8};
    uintptr_t encode = Serializer::serialize(&ptr);
    std::cout << "Uintptr_t: " << encode << std::endl;
    Data* decode = Serializer::deserialize(encode);
    std::cout << "Data*: " << decode << std::endl;
    std::cout << decode->x << std::endl;
}