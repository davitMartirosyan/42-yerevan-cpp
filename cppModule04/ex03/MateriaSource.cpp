/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:41:53 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 23:57:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    for(int i = 0; i < 4; i++)
       inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] != NULL)
            delete inventory[i];
        inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& op)
{
     for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
    *this = op;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
    if (this != &op)
    {
        for(int i = 0; i < 4; i++)
        {
            if (inventory[i] != NULL)
                delete inventory[i];
            inventory[i] = NULL;
        }
        for(int i = 0; i < 4 && op.inventory[i]; i++)
            inventory[i] = op.inventory[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory of MateriaSource is full" << std::endl;
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] != NULL && inventory[i]->getType() == type)
                return (inventory[i]->clone());
    }
    std::cout << "Inventory has no member (" << type << ") type." << std::endl;
    return (NULL);
}