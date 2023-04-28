/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:51:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/28 16:15:16 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::Search(int index)
{
	std::cout << "___________________________________\n";
	std::cout << index;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << this->resize(this->contacts[index].fname) << "|";
	std::cout << std::setw(10) << this->resize(this->contacts[index].lname) << "|";
	std::cout << std::setw(10) << this->resize(this->contacts[index].nickname) << "|";
	// << std::setw(10) << this->contacts[index].lname.resize(10, '.') << "|";
	std::cout << "\n";
	std::cout << "-----------------------------------\n";

}

void PhoneBook::Add(long phone, std::string fname, std::string lname, std::string nickname, std::string darkestSecret)
{
	if (this->index < 8)
	{
		this->contacts[index].fname = fname;
		this->contacts[index].lname = lname;
		this->contacts[index].nickname = nickname;
		this->contacts[index].darkestsecret = darkestSecret;
	}
}

void PhoneBook::Exit(void)
{
	
}

std::string PhoneBook::resize(std::string str)
{
	if (str.size() < 10)
		return(str);
	return(str.substr(0, 9) + std::string("."));
}

void	PhoneBook::UserInputs(std::string UserInput)
{
	int index;
	
	index = this->index;
	std::cout << "Phone Number: ";
	std::cin >> this->contacts[this->index].phone;
	std::cout << "First Name: ";
	std::cin >> this->contacts[this->index].fname;
	std::cout << "Last Name: ";
	std::cin >> this->contacts[this->index].lname;
	std::cout << "Nickname: ";
	std::cin >> this->contacts[this->index].nickname;
	std::cout << "Darkest Secret: ";
	std::cin >> this->contacts[this->index].darkestsecret;
	// std::cout << this->contacts[PhoneBook::index].fname << "\n";
	std::cout << this->contacts[this->index].darkestsecret << "\n";
}