/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:10 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/12 00:10:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::NumberFractionalBits = 8;

Fixed::Fixed( void ) : FixedPointNumber(0)
{
	FixedPointNumber = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& old)
{
	std::cout << "Copy constructor called" << std::endl;
	FixedPointNumber = old.getRawBits();	
}

Fixed Fixed::operator =(const Fixed& op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &op)
		this->FixedPointNumber = op.getRawBits();
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