/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:07:53 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/12 16:01:31 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main ( void )
{
	float fl = 42.42f;
	float getfl;
	// int b = 0;
	int a = static_cast<int>(roundf(fl * 256));
	std::cout << a << std::endl;
	getfl = static_cast<float>(a) / 256;
	std::cout << getfl << std::endl;
	
	return 0;
}
