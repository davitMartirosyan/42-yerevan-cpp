/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 06:57:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 06:44:27 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAV_TRAP_HPP
#define _SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& old);
		ScavTrap& operator=(const ScavTrap& old);
		virtual ~ScavTrap();
	public:
		void attack(const std::string& target);
		void guardGate( void );
};

#endif