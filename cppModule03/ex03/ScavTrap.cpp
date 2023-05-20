/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 02:54:19 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 06:38:30 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " Default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " constructor called!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " destructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old)
{
	*this = old;
	std::cout << "ScavTrap " << Name << " copy constructor called" << std::endl; 
}

ScavTrap& ScavTrap::operator=(const ScavTrap& old)
{
	if (this != &old)
	{
		this->Name = old.Name;
		this->HitPoints = old.HitPoints;
		this->EnergyPoints = old.EnergyPoints;
		this->AttackDamage = old.AttackDamage;
		std::cout << "ScavTrap " << Name << " copy assignments operator called" << std::endl;
	}
	return (*this);
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