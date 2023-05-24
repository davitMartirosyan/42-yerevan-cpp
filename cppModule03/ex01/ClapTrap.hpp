/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:13:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 11:49:23 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAP_TRAP_HPP
#define _CLAP_TRAP_HPP
# define RESET	"\e[0m"
# define BOLD	"\e[1m"
# define DIM	"\e[2m"
# define ITAL	"\e[3m"
# define ULINE	"\e[4m"
# define BLACK	"\e[30m"
# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define YELLOW	"\e[33m"
# define BLUE	"\e[34m"
# define PURPLE	"\e[35m"
# define CYAN	"\e[36m"
# define WHITE	"\e[37m"

#include <iostream>
class ClapTrap
{
	protected:
		std::string Name;
		unsigned int HitPoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
	public: //constructors
		ClapTrap( void );
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& cltp);
		ClapTrap& operator=(const ClapTrap& cltp);
		virtual ~ClapTrap();
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amout);
};

#endif