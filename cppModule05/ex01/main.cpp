/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:24:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 18:51:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try
    {
        Bureaucrat bureaucrat("donald trump", 5);
        Form form("formName", 4, 150);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
        std::cout << "___________________________" << std::endl;
        std::cout << bureaucrat << std::endl;
    }catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }  
}