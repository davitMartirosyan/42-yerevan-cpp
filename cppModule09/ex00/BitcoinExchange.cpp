/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:00:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/09 20:22:50 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string BTC::msg = "";

BTC::BTC( void )
{
}

BTC::BTC(const std::string& f)
{
    file = f;
    db = "data.csv";
    inputFileExtension = file.substr(file.find_last_of(".") + 1);
    inputDbaseExtension = db.substr(db.find_last_of(".") + 1);
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
    std::cout << "Error: " << msg << std::endl;
    exit(0);
}

std::string BTC::getMsg( void )
{
    return (msg);
}


void BTC::openFile( void )
{
    if (file.empty())
        msg = "Could not open file";
    else if (inputFileExtension.empty() || inputFileExtension != "csv")
        msg = "File should have '.csv' extension";
    else
    {
        IO.open(file);
        if (IO.is_open())
            msg = "success";
        else
            msg = "Could not open file";
    }
}
