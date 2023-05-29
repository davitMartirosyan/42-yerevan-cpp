/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:35:07 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/30 03:30:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
}

AMateria::AMateria(std::string const & type)
{
    MateriaType = type;
}

AMateria::AMateria(const AMateria& op) : MateriaType(op.MateriaType) {}

AMateria& AMateria::operator=(const AMateria& op)
{
    if (this != &op)
        this->MateriaType = op.MateriaType;
    return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType( void ) const
{
    return (MateriaType);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* unknown materia used " << target.getName() << " *" << std::endl;
}