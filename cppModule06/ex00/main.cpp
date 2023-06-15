/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:43:57 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/16 02:01:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
        {std::cout << "Incorrect inputs" << std::endl; return (0);}
        ScalarConverter::convert(av[1]);
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}