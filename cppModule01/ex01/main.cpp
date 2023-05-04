/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:53:09 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/03 19:41:27 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int a = 4;
	Zombie *zombo = zombieHorde(a, "ChlpChlpik");
	for(int i = 0; i < a; i++)
		zombo->announce();
	delete [] zombo;
	return (0);
}