/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:43:57 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/09 06:25:52 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "Incorrect inputs" << std::endl;
        return (1);   
    }
    ScalarConverter literal;
    literal.convert(av[1]);
    
}