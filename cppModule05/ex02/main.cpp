/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:14:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/08 00:35:53 by dmartiro         ###   ########.fr       */
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
        Bureaucrat buro("Escobar", 0);
        
        //Formaner
        ShrubberyCreationForm shrubbery("Cannabis"); // 145 137

        buro.signForm(shrubbery);
        // shrubbery.beSigned(buro);

        // buro.executeForm(shrubbery);
    }
    catch(const AForm::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
}