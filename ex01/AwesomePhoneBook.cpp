/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhoneBook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:57:58 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/29 05:59:20 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
int main(void)
{
	PhoneBook phonebook;
	std::cout << "*-------------------------------*\n";
	std::cout << "* Welcome To Awesome Phone Book *\n";
	std::cout << "*-------------------------------*\n";
	while (1)
	{
		std::cout << "Digitain$: ";
		std::getline(std::cin, phonebook.command);
		if (std::cin.eof())
		{
			std::cout << "Bye...\n";
			break;
		}
		else if (phonebook.command == "ADD")
			phonebook.UserInputs();
		else if (phonebook.command == "SEARCH")
			phonebook.Search();
		else if (phonebook.command == "EXIT")
			std::cout << "Exit from program\n";
		else if (phonebook.command == "clear")
			system("clear");
		else
			std::cout << "Command not found" << std::endl;
	}
}