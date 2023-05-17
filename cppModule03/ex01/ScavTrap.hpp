/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 06:57:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/17 07:09:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAV_TRAP_HPP
#define _SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap( void );
	public:
		ScavTrap(const std::string& name);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate( void );
};

#endif