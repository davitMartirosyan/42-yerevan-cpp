/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:24:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 19:29:24 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    try
    {
        /* do some stuff with bureaucrats */
        Bureaucrat bure("Donald Trump", 149);
        std::cout << bure << std::endl;
        bure.decrement();
        std::cout << bure << std::endl;
        bure.decrement();
        std::cout << bure << std::endl;
    }
    catch (std::exception & e)
    {
        /* handle exception */
        std::cout << e.what() << std::endl;
    }
}