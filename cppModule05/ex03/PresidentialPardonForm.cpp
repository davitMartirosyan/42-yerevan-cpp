/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 05:52:56 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 01:06:57 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
    : Form("dflPresident", 25, 5), target("dflPresident")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string tar)
    : Form(tar, 25, 5), target(tar)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& op)
    : Form(op.getName(), op.getGradeSign(), op.getGradeExecute())
{
    this->target = op.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
    if (this != &op)
        this->target = op.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->getSignedStatus() == false)
        throw Form::GradeNotSignedIn();
    else if (executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}
