/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:28:37 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/03 21:28:51 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
    try
    {
        std::vector<int> a = {6, 3, 17, 9, 11};
        Span sp(5);
        sp.addRange(a.begin(), a.end());
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}