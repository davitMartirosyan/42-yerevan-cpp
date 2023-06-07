/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 02:05:36 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/04 03:39:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) 
    : Name("Vladimir Putin"),
    signedStatus(false),
    gradeRequiredSign(1),
    gradeRequiredExecute(1)
{
}

Form::Form(const std::string name, int grSign, int grExec)
    : Name(name),
    signedStatus(false),
    gradeRequiredSign(grSign),
    gradeRequiredExecute(grExec)
{
    if (gradeRequiredSign < 1)
        throw Form::GradeTooHighException();
    else if (gradeRequiredSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& op)
    : Name(op.Name),
    gradeRequiredSign(op.gradeRequiredSign),
    gradeRequiredExecute(op.gradeRequiredExecute)
{
}

Form& Form::operator=(const Form& op)
{
    if (this != &op)
        this->signedStatus = op.getSignedStatus();
    return (*this);
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what( void ) const throw()
{
    return ("Form Grade is High");
}

const char* Form::GradeTooLowException::what( void ) const throw()
{
    return ("Form Grade is Low");
}

const char* Form::GradeNotSignedIn::what( void ) const throw()
{
    return ("isSigned == false");
}

const char* Form::NotFoundException::what( void ) const throw()
{
    return ("The Form is not found");
}

const std::string Form::getName( void ) const { return (this->Name); }
bool Form::getSignedStatus( void )const { return (this->signedStatus); }
int Form::getGradeSign( void ) const { return (this->gradeRequiredSign); }
int Form::getGradeExecute( void ) const{ return (this->gradeRequiredExecute); }

void Form::beSigned(Bureaucrat& buro)
{
    if (buro.getGrade() <= getGradeSign())
        signedStatus = true;
    else
        throw Form::GradeTooLowException();
    std::cout << "[" << buro.getName() << "]" << " signed to " << this->getName() << std::endl;
}

std::ostream& operator<<(std::ostream& cout, const Form& foo)
{
    cout << foo.getName() << std::endl
         << "SignedStatus - " << foo.getSignedStatus() << std::endl
         << "GradeSign - " << foo.getGradeSign() << std::endl
         << "GradeExecute - " << foo.getGradeExecute();
    return (cout);
}