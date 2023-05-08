/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 02:59:44 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/09 02:33:58 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	File file;
	if (!file.Set(av[1], av[2], av[3]))
		return (1);
	else if (!file.CheckArgs())
		return (1);	
	file.OpenToRead();
	if (file.Exist)
	{
		file.SetContent();
		file.IO.close();
		file.ReplaceContent(file.GetContent());
		file.OpenToWrite();
		file.IO << file.GetContent();
		file.IO.close();
	}
	else
		std::cout << "File Not Exist" << std::endl;
}