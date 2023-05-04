/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:33:58 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/04 03:05:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

const std::string& Weapon::getType( void )
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}