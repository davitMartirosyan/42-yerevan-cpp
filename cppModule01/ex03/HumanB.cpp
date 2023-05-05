/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 02:47:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/05 02:50:36 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack( void )
{
	if (weapon != nullptr)
		std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no Weapon " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}