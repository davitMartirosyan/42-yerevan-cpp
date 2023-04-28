/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:58:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/28 14:59:40 by dmartiro         ###   ########.fr       */
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
	public:
		int	index;
		std::string command;
		std::string UserInput;
		PhoneBook() {index = 0;}
		void	Search(int index);
		void	Add(long phone, std::string fname, std::string lname, std::string nickname, std::string darkestSecret);
		void	Exit(void);
		void	UserInputs(std::string UserInput);
		std::string resize(std::string str);
		
};

#endif

/* 
	ADD add person
	SEARCH search person
	EXIT 
*/
/*

________________________________
[0] Davit| Martirsya.| dmartiro|
[1]  Ines| Hovhannis.|  ihovhan|
________________________________



*/