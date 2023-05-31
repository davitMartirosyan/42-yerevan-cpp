/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:57:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 22:55:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    MateriaType = "ice";
}

Ice::Ice(const Ice& op)
{
    this->MateriaType = op.getType();
}

Ice& Ice::operator=(const Ice& op)
{
    this->MateriaType = const_cast<std::string const &>(op.getType());
    return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone( void ) const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;   
}