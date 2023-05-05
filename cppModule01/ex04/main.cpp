/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 02:59:44 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/05 04:20:11 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	// if (ac != 4)
	// {
	// 	std::cout << "Paramater Error" << std::endl;
	// 	return (1);
	// }
	
	std::ifstream infile("file.txt");
	std::string fileContent;
	std::string content;
	while (std::getline(infile, fileContent))
	{
		content += fileContent;
		if (!fileContent.empty())
			content += "\n";
	}
	
	std::ofstream outfile("file.replace");
	outfile << content << std::endl;
	// std::cout << content << std::endl;
}