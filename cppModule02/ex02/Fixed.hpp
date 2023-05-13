/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:22 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/13 15:02:21 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_
#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int FixedPointNumber;
		static const int NumberFractionalBits;
	public:
		Fixed( void );
		Fixed(const int intNumber);
		Fixed(const float floatNumber);
		~Fixed();
		Fixed (const Fixed& old);
		Fixed& operator =(const Fixed& op);
	public:
		int toInt( void ) const;
		int getRawBits( void ) const;
		float toFloat( void ) const;
		void setRawBits(int const raw);	
	public:
		bool operator>(const Fixed &ob) const;
		bool operator<(const Fixed &ob) const;
		bool operator>=(const Fixed &ob) const;
		bool operator<=(const Fixed &ob) const;
		bool operator==(const Fixed &ob) const;
		bool operator!=(const Fixed &ob) const;
	public:
		Fixed operator+(const Fixed &ob) const;
		Fixed operator-(const Fixed &ob) const;
		Fixed operator*(const Fixed &ob) const;
		Fixed operator/(const Fixed &ob) const;
	public:
		Fixed operator++();
		Fixed operator++(int o);
	public:
		static const Fixed& min(const Fixed& o1, const Fixed& o2);
		static const Fixed& max(const Fixed& o1, const Fixed& o2);
		static Fixed& max(Fixed& o1, Fixed& o2);
		static Fixed& min(Fixed& o1, Fixed& o2);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& op);
#endif