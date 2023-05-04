/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:53:09 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/03 21:08:20 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of {string}: " << &str << std::endl;
	std::cout << "Memory address by {pointer}: " << stringPTR << std::endl;
	std::cout << "Memory address by {reference}: " << &stringREF << std::endl;

	std::cout << "Value by {String}: " << str << std::endl;
	std::cout << "Value by {Pointer}: " << *stringPTR << std::endl;
	std::cout << "Value by {Reference}: " << stringREF << std::endl;
	return (0);
}