/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:10 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/12 15:51:19 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::NumberFractionalBits = 8;

Fixed::Fixed( void ) : FixedPointNumber(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
	std::cout << "Int Constructor called" << std::endl;
	FixedPointNumber = intNumber << NumberFractionalBits;
}

Fixed::Fixed(const float floatNumber)
{
	std::cout << "Float Constructor called" << std::endl;
	FixedPointNumber = static_cast<int>(roundf(floatNumber * (1 << NumberFractionalBits)));
}

Fixed::~Fixed()
{
	std::cout << "Desctructor called" << std::endl;
}

Fixed::Fixed (const Fixed& old)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = old;
}

Fixed& Fixed::operator=(const Fixed& op)
{
	if (this != &op)
	{
		std::cout << "Copy Assignment Operator called" << std::endl;
		this->FixedPointNumber = op.FixedPointNumber;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& op)
{
	stream << op.toFloat();
	return (stream);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (FixedPointNumber);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(FixedPointNumber) / (1 << NumberFractionalBits));
}

int Fixed::toInt( void ) const
{
	return (FixedPointNumber >> NumberFractionalBits);
}

void Fixed::setRawBits(int const raw)
{
	this->FixedPointNumber = raw;
}
