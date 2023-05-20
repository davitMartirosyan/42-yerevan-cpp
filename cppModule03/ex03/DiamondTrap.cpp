/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 03:22:03 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 06:44:02 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
    : ClapTrap("default_clap_trap"), ScavTrap("ScavTrap"), FragTrap("FragTrap")
{
    this->Name = "-default-diamond-";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << "DiamondTrap " << Name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->Name = name;
    this->ClapTrap::Name = name + "_clap_trap";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << "DiamondTrap " << Name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << Name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& old)
{
    *this = old;
    std::cout << "DiamondTrap " << Name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& old)
{
    if (this != &old)
    {
        this->Name = old.Name;
        this->HitPoints = old.HitPoints;
        this->EnergyPoints = old.EnergyPoints;
        this->AttackDamage = old.AttackDamage;
        std::cout << "DiamondTrap " << Name << " copy assignment operator called" << std::endl;
    }
    return (*this);
}

void DiamondTrap::whoAmI( void )
{
    std::cout << "DiamondTrap Name's " << Name << std::endl;
    std::cout << "ClapTrap Name's " <<  ClapTrap::Name << std::endl;
    std::cout << "HitPoints: " << HitPoints << std::endl;  
    std::cout << "EnergyPoint: " << EnergyPoints << std::endl;
    std::cout << "AttackDamage: " << AttackDamage << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}