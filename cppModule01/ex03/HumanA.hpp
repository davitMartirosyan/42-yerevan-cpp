/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:38:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/04 03:16:19 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_
#include "Weapon.hpp"

class HumanA
{
	public:
		std::string name;
		HumanA( std::string name, Weapon& weapon);
		Weapon& weapon;
		void attack( void ) const;
};

#endif