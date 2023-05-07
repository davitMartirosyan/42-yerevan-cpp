/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 04:02:30 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/07 06:05:09 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File( void )
{
	this->Exist = 0;
}

File::~File( void )
{
}

int File::CheckArgs( void )
{
	if (filename1.length() == 0 || find.length() == 0 || replace.length() == 0)
	{
		std::cout << "Wrong size of Arguments" << std::endl;
		return (0);
	}
	return (1);
}

int File::Set(char *filename, char *find, char *replace)
{
	if (!filename || !find || !replace)
	{
		std::cout << "Wrong Arguments" << std::endl;
		return (0);
	}
	this->filename1 = filename;
	this->find = find;
	this->replace = replace;
	if (this->filename1.find_last_of(".") == std::string::npos)
		this->filename2 = this->filename1 + ".replace";
	else
		this->filename2 = this->filename1.substr(0, this->filename1.find_last_of(".")) + ".replace";
	return (1);
}

std::string File::GetOldFile( void )
{
	return (this->filename1);	
}

std::string File::GetNewFile( void )
{
	return (this->filename2);	
}

void File::OpenToRead( void )
{
	IO.open(filename1, std::ios::in);
	if (IO.is_open())
		Exist = 1;
	else
		Exist = 0;
}

void File::OpenToWrite( void )
{
	IO.open(filename2, std::ios::out);
	if (IO.is_open())
		Exist = 2;
	else
		Exist = 0;
}

void File::SetContent( void )
{
	while (std::getline(IO, line, '\0'))
			content += line;
}

std::string File::GetContent( void )
{
	return (this->content);
}