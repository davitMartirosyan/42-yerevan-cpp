/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:56:21 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 19:47:50 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
}

Intern::Intern(const Intern&)
{
}

Intern& Intern::operator=(Intern& op)
{
    return (op);
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string formName, const std::string formTarget) const
{
    int idx = -1;
    std::string forms[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };
    while (idx != 3 && formName != forms[++idx]){}
    switch(idx)
    {
        case 0:
            return (new RobotomyRequestForm(formTarget));
        case 1:
            return (new ShrubberyCreationForm(formTarget));
        case 2:
            return (new PresidentialPardonForm(formTarget));
        default:
           throw Form::NotFoundException();
    }
    return (NULL);
}