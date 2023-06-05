/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:14:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 02:15:06 by dmartiro         ###   ########.fr       */
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
    Intern aaa;

    aaa.makeForm("presidential pardon", "roboto");
    // try
    // {
    //     //Byurokratner
    //     Bureaucrat buro("Escobar", 130);
        
    //     //Formaner
    //     ShrubberyCreationForm shrubbery("Cannabis"); // 145 137
    //     RobotomyRequestForm roboto("Roboto"); // 72 45
    //     PresidentialPardonForm pardon("pardon"); // 25 5
        
    //     buro.signForm(shrubbery);
    //     buro.signForm(roboto);
    //     // buro.signForm(pardon);
        
    //     buro.executeForm(shrubbery);
    //     buro.executeForm(roboto);
    // }
    // catch(const Form::GradeTooLowException & e)
    // {
    //     std::cout << "ok\n";
    //     std::cout << e.what() << std::endl;
    // }
}