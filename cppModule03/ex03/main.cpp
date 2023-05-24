/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:33:04 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 06:50:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main( void )
{
	DiamondTrap diamond("ono");
    diamond.attack("ol");
    std::cout << "\n\n\n";
    diamond.whoAmI();
    std::cout << "\n\n\n";

}