/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:07:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 21:08:21 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
    type = "WrongCat";
    std::cout << "WrongCat dfl" << std::endl;
}

WrongCat::WrongCat(const WrongCat& op)
{
    *this = op;
    std::cout << "WrongCat cpy" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& op)
{
    if (this != &op)
    {
        type = op.type;
        std::cout << "WrongCat =op" << std::endl;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat dst" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Meow Meow" << std::endl;
}