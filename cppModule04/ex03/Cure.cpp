/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:11:57 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 22:48:58 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    MateriaType = "cure";
}

Cure::Cure(const Cure& op)
{
    this->MateriaType = op.getType();
}

Cure& Cure::operator=(const Cure& op)
{
    if (this != &op)
        this->MateriaType = op.getType();
    return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone( void ) const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
