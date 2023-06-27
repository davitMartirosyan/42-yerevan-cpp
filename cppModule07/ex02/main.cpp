/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:29:29 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/27 04:29:42 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <vector>
int main( void )
{
    try{
        Array<std::string> strs(2);
        strs[0] = "hello";
        strs[1] = "world";
        
        Array<std::string> strs2(strs);
        strs2[0] = "ok";
        std::cout << strs2[0] << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}