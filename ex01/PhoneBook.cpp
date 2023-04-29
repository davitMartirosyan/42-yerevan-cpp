/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:51:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/30 03:49:25 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::Search()
{
	PhoneBook::ShowAllContacts();
}

void	PhoneBook::Exit(void)
{
	
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
	this->index++;
	if (this->index == 7)
		this->index = 0;
}

void	PhoneBook::Input(void)
{
	int idx = this->index;
	switch (this->checker)
	{
		case 0:
		{
			std::getline(std::cin, this->contacts[idx].phone);
			if (!this->contacts[idx].phone.empty())
				if (PhoneBook::IsNumber(this->contacts[idx].phone))
					checker++;
			break;
		}
		case 1:
		{
			std::getline(std::cin, this->contacts[idx].fname);
			if (!this->contacts[idx].fname.empty())
				this->checker++;
			break;
		}
		case 2:
		{
			std::getline(std::cin, this->contacts[idx].lname);
			if (!this->contacts[idx].lname.empty())
				this->checker++;
			break;
		}
		case 3:
		{
			std::getline(std::cin, this->contacts[idx].nickname);
			if (!this->contacts[idx].nickname.empty())
				this->checker++;
			break;
		}
		case 4:
		{
			std::getline(std::cin, this->contacts[idx].darkestsecret);
			if (!this->contacts[idx].darkestsecret.empty())
				this->checker++;
			break;
		}
	}
}

bool	PhoneBook::IsNumber(std::string str)
{
	bool isNumber = true;
	for(int i = 0; i < str.length(); i++)
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

void	PhoneBook::ShowAllContacts()
{
	int	usercounttable = 0;
	if (this->contacts[0].fname.empty())
		std::cout << "No Contacts Yet!" << std::endl;
	else
	{
		std::cout << "_____________________________________\n";
		for(int index = 0; index <= this->index; index++)
		{
			std::cout << std::right << std::setw(2) << index;
			std::cout << "|";
			std::cout << std::right << std::setw(10) << this->resize(this->contacts[index].fname) << "|";
			std::cout << std::setw(10) << this->resize(this->contacts[index].lname) << "|";
			std::cout << std::setw(10) << this->resize(this->contacts[index].nickname) << "|";
			std::cout << "\n";
		}
		std::cout << "-------------------------------------\n";
	}
}

void	PhoneBook::Close(std::string cls)
{
	std::cout << cls << std::endl;
	exit(0);
}