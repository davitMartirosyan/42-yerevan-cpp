/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:41:19 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/04 02:49:48 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl;
}