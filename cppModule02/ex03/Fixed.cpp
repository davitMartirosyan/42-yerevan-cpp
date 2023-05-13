/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:10 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/13 15:01:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::NumberFractionalBits = 8;

Fixed::Fixed( void ) : FixedPointNumber(0)
{
}

Fixed::Fixed(const int intNumber)
{
	FixedPointNumber = intNumber << NumberFractionalBits;
}

Fixed::Fixed(const float floatNumber)
{
	FixedPointNumber = static_cast<int>(roundf(floatNumber * (1 << NumberFractionalBits)));
}

Fixed::~Fixed()
{
}

Fixed::Fixed (const Fixed& old)
{
	*this = old;
}

Fixed& Fixed::operator=(const Fixed& op)
{
	if (this != &op)
	{
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


/* Operators overloading */


bool Fixed::operator>(const Fixed &ob) const
{
	if(this->FixedPointNumber > ob.FixedPointNumber)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &ob) const
{
	if(this->FixedPointNumber < ob.FixedPointNumber)
		return (true);
	return (false);
}
bool Fixed::operator>=(const Fixed &ob) const
{
	if(this->FixedPointNumber >= ob.FixedPointNumber)
		return (true);
	return (false);
}
bool Fixed::operator<=(const Fixed &ob) const
{
	if (this->FixedPointNumber <= ob.FixedPointNumber)
		return (true);
	return (false);
}
bool Fixed::operator==(const Fixed &ob) const
{
	if (this->FixedPointNumber == ob.FixedPointNumber)
		return (true);
	return (false);	
}
bool Fixed::operator!=(const Fixed &ob) const
{
	if (this->FixedPointNumber != ob.FixedPointNumber)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &ob) const
{
	return (this->toFloat() + ob.toFloat());
}

Fixed Fixed::operator-(const Fixed &ob) const
{
	return (this->toFloat() - ob.toFloat());
}

Fixed Fixed::operator*(const Fixed &ob) const
{
	return (this->toFloat() * ob.toFloat());
}

Fixed Fixed::operator/(const Fixed &ob) const
{
	return (this->toFloat() / ob.toFloat());
}

Fixed Fixed::operator++()
{
	++this->FixedPointNumber;
	return (this->toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->FixedPointNumber;
	return (tmp);
}

Fixed& Fixed::min(Fixed& o1, Fixed& o2)
{
	if (o1 < o2)
		return (o1);
	return (o2);
}

const Fixed& Fixed::min(const Fixed& o1, const Fixed& o2)
{
	if (o1 < o2)
		return (o1);
	return (o2);
}

const Fixed& Fixed::max(const Fixed& o1, const Fixed& o2)
{
	if (o1 > o2)
		return (o1);
	return (o2);	
}

Fixed& Fixed::max(Fixed& o1, Fixed& o2)
{
	if (o1 > o2)
		return (o1);
	return (o2);	
}