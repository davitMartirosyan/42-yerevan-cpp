/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:27:34 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 20:35:21 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    type = "Cat";
    std::cout << "Cat dfl" << std::endl;
}

Cat::Cat(const Cat& op)
{
    *this = op;
    std::cout << "Cat cpy" << std::endl;
}

Cat& Cat::operator=(const Cat& op)
{
    if (this != &op)
    {
        type = op.type;
        std::cout << "Cat =op" << std::endl;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat dst" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meow Meow" << std::endl;
}