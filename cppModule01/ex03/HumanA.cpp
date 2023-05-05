/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 02:36:58 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/05 02:46:43 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack( void )
{
	std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;	
}