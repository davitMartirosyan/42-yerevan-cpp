/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:43:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 19:47:32 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
    public:
        Intern( void );
        Intern(const Intern&);
        Intern& operator=(Intern& op);
        ~Intern();
    public:
        Form* makeForm(std::string formName, const std::string formTarget) const;
};

#endif