/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:00:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/15 06:55:31 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
}

Point::Point(const float m_x, const float m_y) : x(m_x), y(m_y)
{		
}

Point::Point(const Point& op): x(op.x), y(op.y)
{
}

Point& Point::operator=(const Point& op) 
{
	if (this != &op)
	{
		const_cast<Fixed&>(x) = op.x;
		const_cast<Fixed&>(y) = op.y;
	}
	return (*this);
}

const Fixed& Point::X( void ) const
{
	return (x);
}

const Fixed& Point::Y( void ) const
{
	return (y);	
}

Point::~Point()
{
}

bool Point::isSame(const Point& p1, const Point& p2) const
{
	if (p1.X() == p2.X() && p1.Y() == p2.Y())
		return (true);
	return (false);
}

double Point::determinant(Point p1, Point p2, Point p3) const 
{
	return (p1.X().toFloat() * (p2.Y().toFloat() - p3.Y().toFloat()) + p2.X().toFloat() * (p3.Y().toFloat() - p1.Y().toFloat()) + p3.X().toFloat() * (p1.Y().toFloat() - p2.Y().toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point P;
	double areas = P.determinant(a, b, c);
	double areaPAB = P.determinant(point, a, b);
	double areaPBC = P.determinant(point, b, c);
	double areaPCA = P.determinant(point, c, a);
	double u = areaPBC / areas;
	double v = areaPCA / areas;
	double w = areaPAB / areas;
	
	if (P.isSame(point, a) || P.isSame(point, b) || P.isSame(point, c))
		return (false);
	else if (u >= 0 && v >= 0 && w >= 0 && u <= 1 && v <= 1 && w <= 1)
		return (true);
	return (false);
}