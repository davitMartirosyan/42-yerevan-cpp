/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:24:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/01 05:04:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try
    {
        Bureaucrat trump("Donald", 15);
        Form form("form", 1, 150);
        form.beSigned(trump);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}