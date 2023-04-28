/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhoneBook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:57:58 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/28 16:21:10 by dmartiro         ###   ########.fr       */
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
	while (!std::cin.eof())
	{
		std::cout << "bash$: ";
		std::cin >> phonebook.command;
		// std::cin >> phonebook.command;
		if (std::cin.eof())
			std::cout << "Bye...\n";
		else if (phonebook.command == "ADD")
		{
			std::cout << "Add user\n";
			phonebook.UserInputs(phonebook.UserInput);
			std::cout << "Hasa\n";
		}
		else if (phonebook.command == "SEARCH")
			std::cout << "Search User\n";
		else if (phonebook.command == "EXIT")
			std::cout << "Exit from program\n";
		else if (phonebook.command == "clear")
			system("clear");
	}
}