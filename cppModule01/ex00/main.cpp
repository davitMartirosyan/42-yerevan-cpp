/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:53:09 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/03 17:10:49 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::string name;
	std::cout << "[ Stack ] " << std::endl;
	std::cout << "Create a Zombie: " << std::flush;
	std::cin >> name;
	
	Zombie zombie(name);
	zombie.announce();

	std::cout << "{ Heap }" << std::endl;
	std::cout << "Create Zombie: " << std::flush;
	std::cin >> name;
	
	Zombie *zombie1 = newZombie(name);
	zombie1->announce();
	delete zombie1;

	std::cout << "RandomChump();" << std::endl;
	randomChump("Random Zombie");
	return (0);
}