/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:33:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/16 06:43:22 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Sindel("Sindel");
	ClapTrap Raiden("Raiden");
	std::cout << "____________________________________________________\n\n";
	Sindel.attack("Raiden");
	Raiden.takeDamage(2);
	Sindel.attack("Raiden");
	std::cout << "____________________________________________________\n";
}