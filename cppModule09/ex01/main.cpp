/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:48:54 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/13 21:39:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac < 2)
            throw std::runtime_error("Incorrect Inputs");
        RPN Polish(av);
        Polish.filter();
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }   
}