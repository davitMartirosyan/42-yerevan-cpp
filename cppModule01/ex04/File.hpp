/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 03:53:39 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/07 05:58:58 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILE_HPP_
#define _FILE_HPP_
#include <iostream>
#include <fstream>
class File
{
	private:
		std::string filename1;
		std::string filename2;
		std::string find;
		std::string replace;
		std::string line;
		std::string content;
	public:
		File( void );
		~File();
		int Exist;
		int NotExist;
		int CheckArgs( void );
	public:
		std::fstream IO;
		std::string GetOldFile( void );
		std::string GetNewFile( void );
		std::string GetContent( void );
		void OpenToRead( void );
		void OpenToWrite( void );
	public:
		int Set(char *filename, char *find, char *replace);
		void SetContent ( void );
};
#endif