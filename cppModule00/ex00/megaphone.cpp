/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:42:16 by dmartiro          #+#    #+#             */
/*   Updated: 2023/04/26 23:02:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else	
	{
		for(int i = 1; i < ac; i++)
		{
			std::string word = av[i];
			for(int j = 0; j < (int)word.size(); j++)
				std::cout << (char)toupper(word[j]);
		}
	}
	std::cout << std::endl;
}