/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:02:38 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/20 01:27:30 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// void func1(std::string & r)
// {
//     std::cout << r << std::endl;
// }

// void func2(std::string * p)
// {
//     std::cout << *p << std::endl;
// }

int main( void )
{
    Base *base = new A();
    Base &b = *base;
    identify(b);
    identify(base);

}