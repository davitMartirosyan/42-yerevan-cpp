/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:51:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/02 03:37:47 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	nospace = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Search()
{
	int idx;
	if (this->contacts[0].getFname().empty())
	{
		std::cout << "No Contacts Yet!" << std::endl;
		return;
	}
	else if (this->nospace == 8)
		PhoneBook::ShowAllContacts(this->nospace);
	else
		PhoneBook::ShowAllContacts(this->index);
	while(1)
	{
		std::cout << "Id: ";
		std::getline(std::cin, this->id);
		if (!PhoneBook::IsNumber(this->id))
		{
			std::cout << "Enter Correct Id" << std::endl;
			continue;
		}
		else
			break;
	}
	idx = std::atoi(this->id.c_str());
	if (idx > 7 || this->contacts[idx].getFname().empty())
	{
		std::cout << "No Member with id: " << idx << std::endl;
		return ;
	}
	else
	{
		std::cout << "Phone Number: " << this->contacts[idx].getPhone() << std::endl;
		std::cout << "First Name: " << this->contacts[idx].getFname() << std::endl;
		std::cout << "Last Name: " << this->contacts[idx].getLname() << std::endl;
		std::cout << "Nick Name: " << this->contacts[idx].getNickname() << std::endl;
		std::cout << "Darkest Secret: " << this->contacts[idx].getDarkest() << std::endl;
	}
}

std::string PhoneBook::resize(std::string str)
{
	if (str.size() < 10)
		return(str);
	return(str.substr(0, 9) + std::string("."));
}

void	PhoneBook::UserInputs()
{
	this->checker = 0;
	if (this->index == 8)
	{
		this->index = 0;
		this->nospace = 8;
	}
	while (this->checker <= 4)
	{
		if (std::cin.eof())
			break;
		if (this->checker == 0)
			std::cout << "Phone Number: ";
		else if (this->checker == 1)
			std::cout << "First Name: ";
		else if (this->checker == 2)
			std::cout << "Last Name: ";
		else if (this->checker == 3)
			std::cout << "Nickname: ";
		else if (this->checker == 4)
			std::cout << "Darkest Secret: ";
		Input();
	}
	this->contacts[index].setContactInfo(_phone, _fname, _lname, _nickname, _darkest);
	this->index++;
}

void	PhoneBook::Input(void)
{
	switch (this->checker)
	{
		case 0:
		{
			std::getline(std::cin, this->_phone);
			if (!this->_phone.empty())
				if (PhoneBook::IsNumber(this->_phone))
					this->checker++;
			break;
		}
		case 1:
		{
			std::getline(std::cin, this->_fname);
			if (!this->_fname.empty())
				this->checker++;
			break;
		}
		case 2:
		{
			std::getline(std::cin, this->_lname);
			if (!this->_lname.empty())
				this->checker++;
			break;
		}
		case 3:
		{
			std::getline(std::cin, this->_nickname);
			if (!this->_nickname.empty())
				this->checker++;
			break;
		}
		case 4:
		{
			std::getline(std::cin, this->_darkest);
			if (!this->_darkest.empty())
				this->checker++;
			break;
		}
	}
}

bool	PhoneBook::IsNumber(std::string str)
{
	bool isNumber = true;
	for(int i = 0; i < (int)str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (i == 0 && str[i] == '+')
				continue;
			isNumber = false;
			break;
		}
	}
	return (isNumber);
}

void	PhoneBook::ShowAllContacts(int space)
{
	std::cout << "*************************************\n";
	for(int index = 0; index < space; index++)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(2) << index;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << this->resize(this->contacts[index].getFname()) << "|";
		std::cout << std::setw(10) << this->resize(this->contacts[index].getLname()) << "|";
		std::cout << std::setw(10) << this->resize(this->contacts[index].getNickname()) << "|";
		std::cout << "\n";
	}
	std::cout << "*************************************\n";
}

void	PhoneBook::Close(std::string cls)
{
	std::cout << cls << std::endl;
	exit(1);
}