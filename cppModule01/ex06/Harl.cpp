/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 03:00:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/10 17:36:23 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "\x1B[35m[DEBUG]: I love having extra bacon for my"
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do! \x1B[0m"
	<< std::endl;
}

void Harl::info( void )
{
    std::cout << "\x1B[36m[INFO]: I cannot believe adding extra bacon costs more money."
	<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\x1B[0m" 
	<< std::endl;
}

void Harl::warning( void )
{
    std::cout << "\x1B[33m[WARNING]: I think I deserve to have some extra bacon for free."
	<<" I've been coming for years whereas you started working here since last month.\x1B[0m"
	<< std::endl;
}

void Harl::error( void )
{
    std::cout << "\x1B[31m[ERROR]: This is unacceptable! I want to speak to the manager now.\x1B[0m" << std::endl;
}

void Harl::complain( std::string level )
{
	int i = -1;
	std::string sdl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	while (++i != 4 && level != sdl[i]){}
	switch(i)
	{
		case 0:
		{ (this->*ptr[i++])(); }
		case 1:
		{ (this->*ptr[i++])(); }
		case 2:
		{ (this->*ptr[i++])(); }
		case 3:
		{ (this->*ptr[i])(); break;}
		default:
		{std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break;}
	}
}