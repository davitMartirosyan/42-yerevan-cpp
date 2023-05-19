/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 02:54:19 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/19 01:13:42 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << RED << "ScavTrap " << RESET << this->Name << " Default constructor Constructed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << RED << "ScavTrap " << RESET << this->Name << "Parameterized constructor Constructed!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << RESET << this->Name << " Destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0 || HitPoints <= 0)
	{
		std::cout << RED << "ScavTrap " << RESET << PURPLE << Name << RESET <<  " Can't attack!" << std::endl;
		return;
	}
	std::cout << RED << "ScavTrap " << RESET << PURPLE << Name << RESET << " attacks " << CYAN << target << RESET << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ScavTrap::guardGate( void )
{
	std::cout << PURPLE << "ScavTrap " << RESET << Name << " is now in Gate keeper mode" << std::endl;
}