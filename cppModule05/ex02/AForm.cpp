/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 02:05:36 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/03 14:09:06 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) 
    : Name("Vladimir Putin"),
    signedStatus(false),
    gradeRequiredSign(1),
    gradeRequiredExecute(1)
{
}

AForm::AForm(const std::string name, int grSign, int grExec)
    : Name(name),
    signedStatus(false),
    gradeRequiredSign(grSign),
    gradeRequiredExecute(grExec)
{
    if (gradeRequiredSign < 1)
        throw AForm::GradeTooHighException();
    else if (gradeRequiredSign > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& op)
    : Name(op.Name),
    gradeRequiredSign(op.gradeRequiredExecute),
    gradeRequiredExecute(op.gradeRequiredExecute)
{
}

AForm& AForm::operator=(const AForm& op)
{
    if (this != &op)
        this->signedStatus = op.getSignedStatus();
    return (*this);
}

AForm::~AForm()
{
}

const char* AForm::GradeTooHighException::what( void ) const throw()
{
    return ("AForm Grade is High");
}

const char* AForm::GradeTooLowException::what( void ) const throw()
{
    return ("AForm Grade is Low");
}

const std::string AForm::getName( void ) const { return (this->Name); }
bool AForm::getSignedStatus( void )const { return (this->signedStatus); }
int AForm::getGradeSign( void ) const { return (this->gradeRequiredSign); }
int AForm::getGradeExecute( void ) const{ return (this->gradeRequiredExecute); }

void AForm::beSigned(Bureaucrat& buro)
{
    if (buro.getGrade() <= getGradeSign())
        signedStatus = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& cout, const AForm& foo)
{
    cout << foo.getName() << std::endl
         << "SignedStatus - " << foo.getSignedStatus() << std::endl
         << "GradeSign - " << foo.getGradeSign() << std::endl
         << "GradeExecute - " << foo.getGradeExecute();
    return (cout);
}