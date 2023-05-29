/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:11:37 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/30 02:24:41 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    dogbrain = new Brain();
    std::cout << "Dog dfl" << std::endl;
}

Dog::Dog(const Dog& op) : Animal(op)
{ 
    *this = op; 
    std::cout << "Dog cpy";
}

Dog& Dog::operator=(const Dog& op)
{
    if (this != &op)
    {
        type = op.type;
        this->dogbrain = new Brain(*op.dogbrain);
        std::cout << "Dog =op" << std::endl;
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog dst" << std::endl;
    delete dogbrain;
}

void Dog::makeSound( void ) const
{
    std::cout << "Woof Woof" << std::endl;
}