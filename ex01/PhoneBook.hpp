/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:58:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/30 03:28:51 by dmartiro         ###   ########.fr       */
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
		int	users;
		int	index;
		std::string command;
		PhoneBook() {index = 0; users = 0;}
		void	Search();
		void	Exit(void);
		void	UserInputs();
		void	ShowAllContacts();
		void	Close(std::string cls);
		std::string resize(std::string str);
	private:
		void	Input(void);
		bool	IsNumber(std::string str);
};

#endif