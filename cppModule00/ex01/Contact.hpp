/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:58:00 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/02 03:36:10 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	private:
		std::string phone;
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string darkestsecret;
	public:
		void setContactInfo(std::string phone, std::string fname, std::string lname, std::string nickname, std::string darkest);
		std::string	getPhone( void );
		std::string	getFname( void );
		std::string	getLname( void );
		std::string	getNickname( void );
		std::string	getDarkest( void );
};

#endif