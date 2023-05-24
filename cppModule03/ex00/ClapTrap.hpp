/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:13:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/16 05:57:43 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAP_TRAP_HPP
#define _CLAP_TRAP_HPP
#include <iostream>
class ClapTrap
{
	private:
		std::string Name;
		unsigned int HitPoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
	public: //constructors
		ClapTrap( void );
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& cltp);
		ClapTrap& operator=(const ClapTrap& cltp);
		~ClapTrap();
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amout);
};

#endif