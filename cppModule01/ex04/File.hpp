/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 03:53:39 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/09 02:31:54 by dmartiro         ###   ########.fr       */
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
		int Found(int pos);
	public:
		std::fstream IO;
		std::string GetOldFile( void );
		std::string GetNewFile( void );
		std::string GetContent( void );
		void OpenToRead( void );
		void OpenToWrite( void );
		void ReplaceContent(const std::string& content);
		void Replace(int pos);
	public:
		int Set(const char *filename, const char *find, const char *replace);
		void SetContent ( void );
};
#endif