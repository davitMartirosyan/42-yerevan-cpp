/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 02:05:36 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/01 05:04:14 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) 
    : Name("Vladimir Putin"),
    signedStatus(false),
    gradeRequiredSign(1),
    gradeRequiredExecute(150)
{
}

Form::Form(const std::string name, int grSign, int grExecute)
    : Name(name),
    signedStatus(false),
    gradeRequiredSign(grSign),
    gradeRequiredExecute(grExecute)
{
    if (gradeRequiredSign < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (gradeRequiredSign > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form& op)
    : Name(op.Name),
    gradeRequiredSign(op.gradeRequiredExecute),
    gradeRequiredExecute(op.gradeRequiredExecute)
{
}

Form& Form::operator=(const Form& op)
{
    if (this != &op)
        this->signedStatus = op.signedStatus;
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

const std::string Form::getName( void ) const { return (this->Name); }
bool Form::getSignedStatus( void )const { return (this->signedStatus); }
int Form::getGradeSign( void ) const { return (this->gradeRequiredSign); }
int Form::getGradeExecute( void ) const{ return (this->gradeRequiredExecute); }

void Form::beSigned(Bureaucrat& buro)
{
    if (buro.getGrade() > 150)
        throw Form::GradeTooLowException();
    signedStatus = true;
}

std::ostream& operator<<(std::ostream& cout, const Form& foo)
{
    cout << foo.getName() << std::endl
         << "SignedStatus - " << foo.getSignedStatus() << std::endl
         << "GradeSign - " << foo.getGradeSign() << std::endl
         << "GradeExecute - " << foo.getGradeExecute();
    return (cout);
}