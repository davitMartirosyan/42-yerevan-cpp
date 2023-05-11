/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:08:22 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/11 23:57:42 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_
#include <iostream>
class Fixed
{
	private:
		int FixedPointNumber;
		static const int NumberFractionalBits;
	public:
		Fixed( void );
		~Fixed();
		Fixed (const Fixed& old);
		Fixed operator =(const Fixed& op);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
};

#endif