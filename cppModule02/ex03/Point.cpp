/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:29:14 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/13 15:49:27 by dmartiro         ###   ########.fr       */
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
	this->x = cp.x;
	this->y = cp.y;
}

Point& Point::operator=(const Point& op)
{
	if (this != &op)
	{
		
	}
}
