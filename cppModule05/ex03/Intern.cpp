/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:56:21 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 02:14:47 by dmartiro         ###   ########.fr       */
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

Form* Intern::makeForm(const std::string formName, const std::string formTarget)
{
    (void)formTarget;
    std::string forms[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };
    int idx = -1;
    while (formName != forms[++idx]){}
    std::cout << idx << std::endl;

    return (NULL);
}