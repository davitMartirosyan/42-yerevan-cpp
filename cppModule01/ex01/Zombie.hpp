/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:35:05 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/03 19:36:25 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#include <iostream>
#include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
	    Zombie(std::string name);
		~Zombie();
		void announce( void );
		void setName(std::string name);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif