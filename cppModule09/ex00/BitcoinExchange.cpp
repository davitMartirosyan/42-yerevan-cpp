/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:00:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/12 16:00:12 by dmartiro         ###   ########.fr       */
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
    IOD.open(db);
    IOD.seekg(0, std::ios::end);
    if (IOD.tellg() > 0)
    {
        this->charStream = ',';
        IOD.close();
        IOD.open(db);
        if (IOD.is_open())
            this->DBread();
        else
            throw std::runtime_error("Could not resolve connection to Database");
        IOD.close();
    }
    else
        throw std::runtime_error("Database was corrupted");
}

BTC::BTC(const BTC& op)
{
    (void)op;
}

BTC& BTC::operator=(const BTC& op)
{
    (void)op;
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
        throw std::runtime_error("Could not open file");
    else if (inputFileExtension.empty() || inputFileExtension != "csv")
        throw std::runtime_error("File should have '.csv' extension");
    else
    {
        this->charStream = '|';
        IOI.open(file);
        IOI.seekg(0, std::ios::end);
        if (IOI.tellg() > 0)
        {
            IOI.close();
            IOI.open(file);
            if (IOI.is_open())
                this->UIread();
            else
                throw std::runtime_error("Could not open file");
        }
        else
            throw std::runtime_error("User input was corrupted");
    }
    IOI.close();
}

void BTC::DBread( void )
{
    char *end;
    std::string line;
    std::multimap<std::string, std::string> pair;
    while(std::getline(IOD, line))
    {
        pair = regexp(line, ',');
        if (!pair.empty())
            DB.insert(std::make_pair(pair.begin()->first, pair.begin()->second));
    }
    for(std::multimap<std::string, std::string>::iterator it = DB.begin(); it != DB.end(); it++)
        std::cout << it->first << " -> " << it->second << std::endl;
}

void BTC::UIread( void )
{
    char *end;
    std::string line;
    std::multimap<std::string, std::string> pair;
    while(std::getline(IOI, line))
    {
        pair = regexp(line, '|');
        if (!pair.empty())
            UI.insert(std::make_pair(pair.begin()->first, pair.begin()->second));
    }
    for(std::multimap<std::string, std::string>::iterator it = UI.begin(); it != UI.end(); it++)
        std::cout << it->first << " => " << it->second << std::endl;
}

const char * BTC::DBException::what( void ) const throw()
{
    return (msg.c_str());
}

const char * BTC::FileException::what( void ) const throw()
{
    return (msg.c_str());
}

const std::multimap<std::string, std::string> BTC::regexp(const std::string& operand, char o)
{
    int i = 0;
    std::string s = trim(operand);
    std::multimap<std::string, std::string> pair;
    for (std::string::iterator it = s.begin(); it != s.end(); it++)
        if (std::isdigit(*it) || *it == this->charStream || *it == '-' || *it == '+')
            i++;
    if (i < 10)
        return (pair);
    if (operand.empty())
        return (pair);
    else
    {
        std::string date = s.substr(0, s.find(o));
        std::string val = s.substr(date.size()+1, s.size()-date.size());
        date = trim(date);
        val = trim(val);
        int cal = 0;
        for(int i = 0; i < date.size(); i++)
        {
            if ((i == 4 || i == 7) && date.at(i) == '-')
                cal++;
            else if (std::isdigit((date.at(i))))
                cal++;
        }
        if (date.find(" ") == std::string::npos && date.size() == cal
            && date.substr(0, date.find_first_of("-")) <= "2050"
            && date.substr(date.find_first_of("-")+1, date.find_first_not_of("-")+2) <= "12"
            && date.substr(date.find_last_of("-")+1) <= "31")
                    pair.insert(std::make_pair(date, val));
        else
            pair.insert(std::make_pair("Error: bad input", date));
        return (pair);
    }
    return (pair);
}

std::string BTC::rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(" \n\t\f\v");
    return (end == std::string::npos ? "" : s.substr(0, end + 1));
}

std::string BTC::ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(" \n\t\f\v");
    return (start == std::string::npos ? s : s.substr(start));
}

std::string BTC::trim(const std::string &s)
{
    return (ltrim(rtrim(s)));
}
