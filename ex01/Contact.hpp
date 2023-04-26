/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:58:00 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/27 00:58:01 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
	private:
		int contacts = 0;
	public:
		Contact()
		{
		}
		~Contact()
		{
		}
	void listSize()
	{
		std::cout << contacts << std::endl;
	}
};

#endif