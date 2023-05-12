/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:22 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/12 15:04:21 by dmartiro         ###   ########.fr       */
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
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits(int const raw);	
};

std::ostream& operator<<(std::ostream& stream, const Fixed& op);
#endif