/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:48:54 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/15 15:59:38 by dmartiro         ###   ########.fr       */
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
        Polish.extract();
        std::cout << Polish.inFixResult() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}