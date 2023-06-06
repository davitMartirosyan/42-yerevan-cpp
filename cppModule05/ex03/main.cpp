/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:14:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 19:55:20 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    try
    {
        //Byurokratner
        // Bureaucrat buro("Escobar", 130);
        Intern aaa;
        Bureaucrat buro("donald", 20);
        Form* fo;
    
        
        fo = aaa.makeForm("robotomy request", "transform");
        buro.signForm(*fo);
        buro.executeForm(*fo);   
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}