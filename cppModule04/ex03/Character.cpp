/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:06:03 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/01 00:26:58 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(const std::string& name)
{
    Name = name;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::~Character(){}

Character::Character(const Character& op)
{
    for(int i = 0; i < 4; i++)
        if (op.inventory[i])
            inventory[i] = op.inventory[i]->clone();
    Name = op.Name;
}

Character& Character::operator=(const Character& op)
{
    if (this != &op)
    {
        Name = op.Name;
        for(int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = 0;
        }
        for(int i = 0; i < 4; i++)
            if (op.inventory[i])
                inventory[i] = op.inventory[i]->clone();
    }
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
        if (i <= 4 && inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory of Character is full" << std::endl;
    return ;
}

void Character::unequip(int idx)
{
    static int unuse = 0;
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
    unusedptrs[unuse++] = inventory[idx];
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx]->use(target);
    return ;
}