/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:07:53 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/15 06:55:51 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void )
{
	Point const A(2, 5);
	Point const B(7, 2);
	Point const C(9, 7);
	Point const P(7, 9);
	if (bsp(A, B, C, P))
		std::cout << "The Point of P: { "
		<< P.X() << " "
		<< P.Y() << " } is inside of Triangle"
		<< std::endl;
	else
		std::cout << "Point is outside of Triangle" << std::endl;
	return 0;
}
