/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:59:37 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/19 01:15:02 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	std::cout << RED << "FragTrap " << RESET << this->Name << "Default constructor Constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(Name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	std::cout << RED << "FragTrap " << RESET << this->Name << "Parameterized constructor Constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& old)
{
    *this = old;
	std::cout << YELLOW << "FragTrap " << Name << " Copy Constructor called!" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& old)
{
    if (this != &old)
    {
        this->Name = old.Name;
        this->HitPoints = old.HitPoints;
        this->EnergyPoints = old.EnergyPoints;
		std::cout << YELLOW <<"FragTrap " << Name << " Copy Assignment Operator called!" << RESET << std::endl;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap " << RESET << YELLOW << this->Name << RESET << " Destroyed!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << this->Name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}