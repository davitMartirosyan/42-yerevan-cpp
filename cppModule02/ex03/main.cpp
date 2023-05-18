/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:07:53 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/18 18:20:16 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void )
{
	Point const A(4, 5);
	Point const B(7, 9);
	Point const C(12, 7);
	Point const P(6, 8);
	if (bsp(A, B, C, P))
		std::cout << "The Point of P: { "
		<< P.X() << " "
		<< P.Y() << " } is inside of Triangle"
		<< std::endl;
	else
		std::cout << "Point is outside of Triangle" << std::endl;
	return 0;
}
