/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:58:42 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/09 22:08:52 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
#define BTC_HPP
#include <iostream>
#include <map>
#include <cstdlib>
#include <fstream>
#include <exception>
#include <unistd.h>

class BTC
{
    private:
        static std::string msg;
        static std::string exp;
    private:
        std::fstream IOD;
        std::fstream IOI;
    private:
        std::string file;
        std::string db;
        std::string inputFileExtension;
        std::string inputDbaseExtension;
    private:
        std::map<std::string, double> Dbase;
        std::map<std::string, double> Input;
    public:
        BTC( void );
        BTC(const std::string& file);
        BTC(const BTC& op);
        BTC& operator=(const BTC& op);
        ~BTC();
    public:
        static void Exit(std::string errmsg);
        static std::string getMsg( void );
    public:
        void openFile( void );
        void DBread( void );
    public:
        class DBException : public std::exception
        {
            public:
                virtual const char *what( void ) const throw();
        };
        class FileException : public std::exception
        {
            public:
                virtual const char *what( void ) const throw();
        };
    public:
        void regexp(const std::string& operand);
        std::string rtrim(const std::string &s);
        std::string ltrim(const std::string &s);
        std::string trim(const std::string &s);
};

#endif