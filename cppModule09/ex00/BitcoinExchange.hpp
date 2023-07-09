/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:58:42 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/09 20:21:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
#define BTC_HPP
#include <iostream>
#include <map>
#include <cstdlib>
#include <fstream>

class BTC
{
    private:
        std::fstream IO;
    private:
        std::string file;
        std::string db;
        std::string inputFileExtension;
        std::string inputDbaseExtension;
    private:
        std::map<std::string, double> Dbase;
        std::map<std::string, double> Input;
    private:
        static std::string msg;
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
};

#endif