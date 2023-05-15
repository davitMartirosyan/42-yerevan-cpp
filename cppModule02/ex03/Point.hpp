/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:56:56 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/15 06:54:10 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point( void );
		Point(const float x, const float y);
		Point(const Point& op);
		Point& operator=(const Point& op);
		~Point();
		const Fixed& X( void ) const;
		const Fixed& Y( void ) const;
		double determinant(Point p1, Point p2, Point p3) const;
		bool isSame(const Point& p1, const Point& p2) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif