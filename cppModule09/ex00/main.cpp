/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:57:45 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/12 16:06:54 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    if (ac != 2)
        BTC::Exit("Could not open file");
    try
    {
        BTC btc(av[1]);
        std::cout << "___________" << std::endl;
        btc.openFile();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}