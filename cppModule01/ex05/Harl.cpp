/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 03:00:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/10 16:35:56 by dmartiro         ###   ########.fr       */
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
    std::cout << "[DEBUG]: Debug function" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]: Info function" << std::endl;
    
}

void Harl::warning( void )
{
    std::cout << "[WARNING]: Warning function" << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]: Error function" << std::endl;
}

void Harl::complain( std::string level )
{
	(void)level;
	std::string sdl[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[5])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	int i = -1;
	while (++i != 4 && level != sdl[i])
	{
	}
	(this->*ptr[i])();
}