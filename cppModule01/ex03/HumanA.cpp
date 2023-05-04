/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:18:22 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/04 03:58:39 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

void HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl;
}

