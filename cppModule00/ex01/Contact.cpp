/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:55:22 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/02 03:36:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setContactInfo(std::string phone, std::string fname, std::string lname, std::string nickname, std::string darkest)
{
	this->phone = phone;
	this->fname = fname;
	this->lname = lname;
	this->nickname = nickname;
	this->darkestsecret = darkest;
}

std::string	Contact::getPhone( void )
{
	return (this->phone);	
}

std::string	Contact::getFname( void )
{
	return (this->fname);
}

std::string	Contact::getLname( void )
{
	return (this->lname);
}

std::string	Contact::getNickname( void )
{
	return (this->nickname);
}

std::string	Contact::getDarkest( void )
{
	return (this->darkestsecret);
}