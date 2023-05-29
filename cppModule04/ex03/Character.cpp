/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:06:03 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/30 03:44:57 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
}

Character::Character(const std::string& name) : Name(name)
{
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
        if (inventory[i] != NULL)
            delete inventory[i];
}

Character::Character(const Character& op)
{
    *this = op;
}

Character& Character::operator=(const Character& op)
{
    if (this != &op)
        for(int i = 0; i < 4; i++)
            inventory[i] = op.inventory[i]->clone();
    return (*this);
}

std::string const & Character::getName( void ) const
{
    return (this->Name);
}

void Character::equip(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory of Character is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Unable to find inventory member by (" << idx << ") " << std::endl;
        return ;
    }
    if (inventory[idx] == NULL)
    {
        std::cout << "Unable to return not located inventory member by (" << idx << ") " << std::endl;
        return ; 
    }
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx]->use(target);
    return ;
}