/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:29:14 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/13 15:51:10 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
}

Point::Point(const Fixed& o1, const Fixed& o2) : x(o1), y(o2)
{	
}

Point::~Point()
{
	
}

Point::Point(const Point& cp)
{
	x.setRawBits(cp.x.getRawBits());
}

Point& Point::operator=(const Point& op)
{
	if (this != &op)
	{
		
	}
}
