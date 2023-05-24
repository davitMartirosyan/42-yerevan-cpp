/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:04:24 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 21:08:51 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal dfl" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& op)
{
    *this = op; std::cout << "WrongAnimal cpy" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& op)
{
    if (this != &op)
    {
        type = op.type;
        std::cout << "WrongAnimal = op" << std::endl; 
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal dst" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal Chunchurik" << std::endl;
}

std::string WrongAnimal::getType( void ) const { return (type); }