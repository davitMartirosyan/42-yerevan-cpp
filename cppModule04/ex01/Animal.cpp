/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:04:24 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 20:59:47 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    type = "Animal";
    std::cout << "Animal dfl" << std::endl;
}

Animal::Animal(const Animal& op)
{
    *this = op; std::cout << "Animal cpy" << std::endl;
}

Animal& Animal::operator=(const Animal& op)
{
    if (this != &op)
    {
        type = op.type;
        std::cout << "Animal = op" << std::endl; 
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal dst" << std::endl;
}

void Animal::makeSound( void ) const
{
    std::cout << "Chunchurik" << std::endl;
}

std::string Animal::getType( void ) const { return (type); }