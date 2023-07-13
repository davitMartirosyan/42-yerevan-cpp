/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:00:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/13 17:58:35 by dmartiro         ###   ########.fr       */
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
    db = "data.csv";
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
        if (IOI.is_open())
        {
            if (IOI.tellg() > 0)
            {
                IOI.close(); IOI.open(file);
                this->UIread();
            }
            else
                throw std::runtime_error("User input was corrupted");
        }
        else
            throw std::runtime_error("Could not open file");
    }
    IOI.close();
}

void BTC::DBread( void )
{
    std::string line;
    multimap pair;
    while(std::getline(IOD, line))
    {
        pair = regexp(line, ',');
        if (pair.begin()->first == "#?")
            throw std::runtime_error("Database was corrupted");
        else if (!pair.empty())
            DB.insert(std::make_pair(pair.begin()->first, pair.begin()->second));
    }
}

void BTC::UIread( void )
{
    std::string line;
    multimap pair;
    while(std::getline(IOI, line))
    {
        pair = regexp(line, '|');
        if (pair.begin()->first == "#?")
            throw std::runtime_error("User Input Corrupted");
        else if (!pair.empty())
            UI.insert(std::make_pair(pair.begin()->first, pair.begin()->second));
    }
}

void BTC::display( void )
{
    multimap::iterator ui = UI.begin();
    for(; ui != UI.end(); ui++)
        displayLine(ui);
}

multimap::iterator BTC::find(const std::string& key)
{
    multimap::iterator db;
    multimap::iterator closest = DB.end();
    int mindiff = std::numeric_limits<int>::max();
    for(db = DB.begin(); db != DB.end(); db++)
    {
        int dif = diff(key, db->first);
        if (dif < mindiff)
        {
            mindiff = dif;
            closest = db;
        }
    }
    return (closest);
}

int BTC::diff(const std::string& key, const std::string& dbkey)
{
    char *endl;
    int year, month, day, yy, mm, dd;
    year = std::strtod(key.substr(0, key.find_first_of("-")).c_str(), &endl);
    month = std::strtod(key.substr(key.find_first_of("-")+1, key.find_first_not_of("-")+2).c_str(), &endl);
    day = std::strtod(key.substr(key.find_last_of("-")+1).c_str(), &endl);
    yy = std::strtod(dbkey.substr(0, dbkey.find_first_of("-")).c_str(), &endl);
    mm = std::strtod(dbkey.substr(dbkey.find_first_of("-")+1, dbkey.find_first_not_of("-")+2).c_str(), &endl);
    dd = std::strtod(dbkey.substr(dbkey.find_last_of("-")+1).c_str(), &endl);
    return (std::abs(year - yy) * 365 + std::abs(month - mm) * 30 + std::abs(day - dd));
}

void BTC::displayLine(multimap::iterator pair)
{
    if (pair->first.find("Error") != std::string::npos)
        std::cout << pair->first << " => " << pair->second << std::endl;
    else
    {
        char *endl;
        double userValue = std::strtod(pair->second.c_str(), &endl);
        double baseValue;
        if (userValue < 0 || userValue > 1000)
        {
            std::cout << "Error: ";
            if (userValue < 0)
                std::cout << "not a positive number";
            else
                std::cout << "too large number";
            std::cout << std::endl;
        }
        else
        {
            multimap::iterator search_db = find(pair->first);
            baseValue = std::strtod(search_db->second.c_str(), &endl);
            std::cout << pair->first << " => " << pair->second << " = " << baseValue * userValue << std::endl;
        }
    }
}

const multimap BTC::regexp(const std::string& operand, char o)
{
    int i = 0;
    std::string s = trim(operand);
    multimap pair;
    if (operand.empty())
        return (pair);
    else if (operand.find((char)o) == std::string::npos)
    { pair.insert(std::make_pair("#?", "Corrupted")); return (pair); }
    for (std::string::iterator it = s.begin(); it != s.end(); it++)
        if (std::isdigit(*it) || *it == this->charStream || *it == '-' || *it == '+')
            i++;
    if (i < 10)
        return (pair);
    else
    {
        std::string date = s.substr(0, s.find(o));
        std::string val = s.substr(date.size()+1, s.size()-date.size());
        date = trim(date);
        val = trim(val);
        int cal = 0;
        for(size_t i = 0; i < date.size(); i++)
        {
            if ((i == 4 || i == 7) && date.at(i) == '-')
                cal++;
            else if (std::isdigit((date.at(i))))
                cal++;
        }
        if (val.find(" ") != std::string::npos || date.empty() || val.empty())
            pair.insert(std::make_pair("#?", "Corrupted"));
        else if (date.find(" ") == std::string::npos && cal == 10
            && date.substr(0, date.find_first_of("-")) <= "2050"
            && date.substr(date.find_first_of("-")+1, date.find_first_not_of("-")+2) <= "12"
            && date.substr(date.find_last_of("-")+1) <= "31"
            && !val.empty() && val.find(" ") == std::string::npos)
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
