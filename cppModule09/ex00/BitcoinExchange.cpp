/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:00:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/09 22:32:40 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string BTC::msg = "";
std::string BTC::exp = "yyyy-mm-dd, 1|1.1";

BTC::BTC( void )
{
}

BTC::BTC(const std::string& f)
{
    file = f;
    db = "test.csv";
    inputFileExtension = file.substr(file.find_last_of(".") + 1);
    openFile();
    IOD.open(db);
    if (IOD.is_open())
        this->DBread();
    else
        throw DBException();
}

BTC::BTC(const BTC& op)
{
    
}

BTC& BTC::operator=(const BTC& op)
{
    return (*this);
}

BTC::~BTC()
{
}

void BTC::Exit(std::string msg)
{
    std::cout << msg << std::endl;
    exit(0);
}

std::string BTC::getMsg( void )
{
    return (msg);
}


void BTC::openFile( void )
{
    if (file.empty() || file == db)
        msg = "Could not open file";
    else if (inputFileExtension.empty() || inputFileExtension != "csv")
        msg = "File should have '.csv' extension";
    else
    {
        IOI.open(file);
        if (IOI.is_open())
            msg = "success";
        else
            msg = "Could not open file";
    }
    if (msg != "success")
        throw FileException();
}

void BTC::DBread( void )
{
    std::string line;
    std::cout << "Database Loading..." << std::endl;
    while(std::getline(IOD, line))
        regexp(line);
    IOD.close();
}

const char * BTC::DBException::what( void ) const throw()
{
    return ("Could not resolve connection to Database");
}

const char * BTC::FileException::what( void ) const throw()
{
    return (msg.c_str());
}

void BTC::regexp(const std::string& operand)
{
    if (operand.empty())
        return ;
    else
    {
        int i = 0;
        std::string s = trim(operand);
        while (std::isdigit(s.at(i)) || s.at(i) == '-')
        {
            if (s.at(i) == ',')
                break;
            i++;
        }
        std::cout << i << std::endl;
    }
    return ;
}

std::string BTC::rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(" \n\t\f\v");
    return (end == std::string::npos ? "" : s.substr(end));
}

std::string BTC::ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(" ");
    return (start == std::string::npos ? s : s.substr(start));
}

std::string BTC::trim(const std::string &s)
{
    return (ltrim(rtrim(s)));
}