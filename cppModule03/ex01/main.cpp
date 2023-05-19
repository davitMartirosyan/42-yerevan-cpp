/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:33:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/18 05:49:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main( void )
{
	ScavTrap nightwolf( "NightWolf" );
    ScavTrap fujin( nightwolf );

    nightwolf.attack( "the air" );
    nightwolf.takeDamage(100);
    
    nightwolf.attack("the air");
    nightwolf.takeDamage(10);
    
    nightwolf.attack("the air");
    nightwolf.takeDamage(10);
    
    nightwolf.attack("the air");

    // nightwolf.guardGate();
}