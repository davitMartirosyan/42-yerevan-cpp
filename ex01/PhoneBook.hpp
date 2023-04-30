/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:58:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/30 05:45:22 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		checker;
	public:
		int	index;
        int nospace;
		std::string	id;
		std::string command;
		PhoneBook() {index = 0; nospace = 0;}
		void	Search();
		void	UserInputs();
		void	ShowAllContacts(int space);
		void	Close(std::string cls);
		std::string resize(std::string str);
	private:
		void	Input(void);
		bool	IsNumber(std::string str);
};
#endif