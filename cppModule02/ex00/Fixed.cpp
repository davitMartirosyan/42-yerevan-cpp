/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:10 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/12 11:01:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::NumberFractionalBits = 8;

Fixed::Fixed( void ) : FixedPointNumber(0)
{
	std::cout << "Default Constructor called" << std::endl;
	FixedPointNumber = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed& Fixed::operator =(const Fixed& op)
{
	if (this != &op)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->FixedPointNumber = op.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (FixedPointNumber);
}

void Fixed::setRawBits(int const raw)
{
	FixedPointNumber = raw;	
}