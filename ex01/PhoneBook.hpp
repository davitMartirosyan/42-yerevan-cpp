/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:58:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/29 07:00:55 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		checker;
	public:
		int	index;
		std::string command;
		PhoneBook() {index = 0;}
		void	Search();
		void	Add(std::string phone, std::string fname, std::string lname, std::string nickname, std::string darkestSecret);
		void	Exit(void);
		void	UserInputs();
		void	ShowAllContacts();
		std::string resize(std::string str);
	private:
		void	Input(void);
		bool	IsNumber(std::string str);
};

#endif