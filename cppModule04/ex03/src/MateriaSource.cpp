/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:41:53 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/29 03:32:51 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    for(int i = 0; i < 4; i++)
        inventory[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
}

// MateriaSource::MateriaSource(const MateriaSource& op)
// {
// }

// MateriaSource& MateriaSource::operator=(const MateriaSource& op)
// {
// }

void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory of MateriaSource is full" << std::endl;
    delete m;
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] != nullptr && inventory[i]->getType() == type)
                return (inventory[i]->clone());
    }
    std::cout << "Inventory has no member (" << type << ") type." << std::endl;
    return (NULL);
}