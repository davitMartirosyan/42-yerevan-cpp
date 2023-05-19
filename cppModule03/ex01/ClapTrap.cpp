/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 03:30:49 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/18 06:01:28 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: Name("Paul Phoenix"),
	HitPoints(10),
	EnergyPoints(10),
	AttackDamage(0) 
{
	std::cout << GREEN << "ClapTrap " << RESET << YELLOW << this->Name << RESET << " Constructor was created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) 
	: Name(name),
	HitPoints(10),
	EnergyPoints(10),
	AttackDamage(0)
{
	std::cout << GREEN << "ClapTrap " << RESET << YELLOW << this->Name << RESET << " Constructor was created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "ClapTrap " << RESET << YELLOW << this->Name << RESET << " Destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cltp)
{
	*this = cltp;
	std::cout << YELLOW << "ClapTrap " << Name << " Copy Constructor called!" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cltp)
{
	if (this != &cltp)
	{
		this->Name = cltp.Name;
		this->HitPoints = cltp.HitPoints;
		this->EnergyPoints = cltp.EnergyPoints;
		this->AttackDamage = cltp.AttackDamage;
		std::cout << YELLOW <<"ClapTrap " << Name << " Copy Assignment Operator called!" << RESET << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints <= 0 || EnergyPoints <= 0)
	{
		std::cout << GREEN << "ClapTrap " << RESET << PURPLE << Name << RESET <<  " Can't attack!" << std::endl;
		return;
	}
	std::cout << GREEN << "ClapTrap " << RESET << PURPLE << Name << RESET << " attacks " << CYAN << target << RESET << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
		return ;
	if (this->HitPoints == 0)
	{
		std::cout << GREEN << "ClapTrap " << RESET <<  this->Name << " can't take damage. It is already died :(" << std::endl;
	}
	else if ((int)this->HitPoints - (int)amount < 0)
	{
		this->HitPoints = 0;
		std::cout << GREEN << "ClapTrap " << RESET <<  BLUE << this->Name << RESET <<  " died." << std::endl;
	}
	else
	{
		this->HitPoints -= amount;
		std::cout << GREEN << "ClapTrap " << RESET << BLUE << this->Name << RESET << " takes damage " << amount << " amount of points"  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
		return ;
	if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
	{
		std::cout << GREEN << "ClapTrap " << RESET << this->Name << " Can't repaired" << std::endl;
	}
	else if (this->HitPoints + amount > 10)
	{
		this->HitPoints = 10;
		this->EnergyPoints--;
		std::cout << GREEN << "ClapTrap " << RESET << this->Name << " health is fully!" << std::endl;
	}
	else
	{
		this->HitPoints += amount;
		this->EnergyPoints--;
		std::cout << GREEN << "ClapTrap " << RESET << CYAN << this->Name << RESET << " takes " << amount << " points of amount and repaired!" << std::endl;
	}
}