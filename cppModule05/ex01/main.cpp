/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:24:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/02 05:36:31 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try
    {
        Bureaucrat bureaucrat("donald trump", 2);
        Form form("formName", 3, 150);
        bureaucrat.decrement();
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
        std::cout << "___________________________" << std::endl;
        std::cout << bureaucrat << std::endl;
    }catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }  
}