/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:37:28 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/04 02:48:18 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_
#include "Weapon.hpp"

class HumanB
{
	public:
		std::string name;
		HumanB(std::string name);
		Weapon weapon;
		void setWeapon(Weapon weaopn);
		void attack( void );
};

#endif