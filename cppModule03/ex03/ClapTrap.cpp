/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 03:30:49 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 04:05:34 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): Name("Paul Phoenix"), HitPoints(10), EnergyPoints(10), AttackDamage(0) 
{
	std::cout << "ClapTrap " << this->Name  << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << this->Name << " constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " destructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cltp)
{
	*this = cltp;
	std::cout << "ClapTrap " << Name << " Copy constructor called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cltp)
{
	if (this != &cltp)
	{
		this->Name = cltp.Name;
		this->HitPoints = cltp.HitPoints;
		this->EnergyPoints = cltp.EnergyPoints;
		this->AttackDamage = cltp.AttackDamage;
		std::cout << "ClapTrap " << Name << " Copy Assignment Operator called!"  << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints <= 0 || EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name <<  " Can't attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
		return ;
	if (this->HitPoints == 0)
	{
		std::cout << "ClapTrap " <<  this->Name << " can't take damage. It is already died :(" << std::endl;
	}
	else if ((int)this->HitPoints - (int)amount < 0)
	{
		this->HitPoints = 0;
		std::cout << "ClapTrap " << this->Name <<  " died." << std::endl;
	}
	else
	{
		this->HitPoints -= amount;
		std::cout << "ClapTrap " << this->Name << " takes damage " << amount << " amount of points"  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
		return ;
	if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " Can't repaired" << std::endl;
	}
	else if (this->HitPoints + amount > 10)
	{
		this->HitPoints = 10;
		this->EnergyPoints--;
		std::cout << "ClapTrap " << this->Name << " health is fully!" << std::endl;
	}
	else
	{
		this->HitPoints += amount;
		this->EnergyPoints--;
		std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of amount and repaired!" << std::endl;
	}
}