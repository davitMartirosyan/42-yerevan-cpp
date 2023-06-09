/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:57:45 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/13 17:56:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        BTC::Exit("Could not open file");
    try
    {
        BTC btc(av[1]);
        btc.openFile();
        btc.display();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}