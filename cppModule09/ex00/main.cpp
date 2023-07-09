/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:57:45 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/09 20:24:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    if (ac != 2)
        BTC::Exit("Could not open file");
    BTC btc(av[1]);
    btc.openFile();
    if (btc.getMsg() == "success")
    {
        std::cout << "okay" << std::endl;
    }
    else
        BTC::Exit(btc.getMsg());
}