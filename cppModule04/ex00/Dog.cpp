/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:11:37 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 20:25:28 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    std::cout << "Dog dfl" << std::endl;
}
Dog::Dog(const Dog& op) { *this = op; std::cout << "Dog cpy";}

Dog& Dog::operator=(const Dog& op)
{
    if (this != &op)
    {
        type = op.type;
        std::cout << "Dog =op" << std::endl;
    }
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog dst" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "Woof Woof" << std::endl;
}