/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:36:14 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/03 16:59:00 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "[" << name << "] has been destroyed" << std::endl;
}

