/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 02:54:19 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 12:57:41 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " Default constructor Constructed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << "Parameterized constructor Constructed!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " Destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0 || HitPoints <= 0)
	{
		std::cout << "ScavTrap " << Name <<  " Can't attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}
