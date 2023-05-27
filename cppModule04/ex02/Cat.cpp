/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:27:34 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/26 20:59:40 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    std::cout << "Cat dfl" << std::endl;
    type = "Cat";
    catbrain = new Brain();
}

Cat::Cat(const Cat& op) : Animal(op)
{
    *this = op;
    std::cout << "Cat cpy" << std::endl;
}

Cat& Cat::operator=(const Cat& op)
{
    if (this != &op)
    {
        type = op.type;
        this->catbrain = new Brain(*op.catbrain);
        std::cout << "Cat =op" << std::endl;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat dst" << std::endl;
    delete catbrain;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meow Meow" << std::endl;
}

Brain& Cat::getBrain( void ) const
{
    return (*catbrain);
}