/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:59:37 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 12:57:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << "Default constructor Constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << "Parameterized constructor Constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& old)
{
    *this = old;
	std::cout << "FragTrap " << Name << " Copy Constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& old)
{
    if (this != &old)
    {
        this->Name = old.Name;
        this->HitPoints = old.HitPoints;
        this->EnergyPoints = old.EnergyPoints;
		std::cout <<"FragTrap " << Name << " Copy Assignment Operator called!" << std::endl;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " Destroyed!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << this->Name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}