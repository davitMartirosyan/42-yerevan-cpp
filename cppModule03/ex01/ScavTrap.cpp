/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 02:54:19 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/17 07:11:23 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << RED << "ScavTrap " << RESET << this->Name << " Constructed!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << RESET << this->Name << " Destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0)
	{
		std::cout << GREEN << "ScavTrap " << RESET << PURPLE << Name << RESET <<  " Can't attack!" << std::endl;
		return;
	}
	std::cout << GREEN << "ScavTrap " << RESET << PURPLE << Name << RESET << " attacks " << CYAN << target << RESET << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ScavTrap::guardGate( void )
{
	std::cout << PURPLE << "ScavTrap " << RESET << Name << " is now in Gate keeper mode" << std::endl;
}