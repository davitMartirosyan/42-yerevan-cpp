/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:59:37 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/21 02:41:55 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << "Default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << " constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " destructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& old) : ClapTrap(old)
{
    *this = old;
	std::cout << "FragTrap " << Name << " Copy Constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& old)
{
    if (this != &old)
    {
        ClapTrap::operator=(old);
        this->Name = old.Name;
        this->HitPoints = old.HitPoints;
        this->EnergyPoints = old.EnergyPoints;
		std::cout <<"FragTrap " << Name << " Copy Assignment Operator called!" << std::endl;
    }
    return (*this);
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << this->Name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}