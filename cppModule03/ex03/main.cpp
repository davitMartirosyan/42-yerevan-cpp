/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:33:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 06:47:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main( void )
{
	DiamondTrap diamond("ono");

    diamond.whoAmI();
    diamond.attack("ol");
}

// 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