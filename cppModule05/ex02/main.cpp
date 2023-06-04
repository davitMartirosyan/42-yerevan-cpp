/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:14:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/04 06:59:46 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    try
    {
        //Byurokratner
        Bureaucrat buro("Escobar", 130);
        
        //Formaner
        ShrubberyCreationForm shrubbery("Cannabis"); // 145 137
        RobotomyRequestForm roboto("Roboto"); // 72 45
        PresidentialPardonForm pardon("pardon"); // 25 5
        
        buro.signForm(shrubbery);
        buro.signForm(roboto);
        // buro.signForm(pardon);
        
        buro.executeForm(shrubbery);
        buro.executeForm(roboto);
    }
    catch(const AForm::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
}