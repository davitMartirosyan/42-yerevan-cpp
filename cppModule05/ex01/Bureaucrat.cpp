/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:29:49 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/02 05:40:36 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name("Joe Biden"), grade(0)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
    : Name(name),
    grade(grade)
{ 
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& op) : Name(op.Name), grade(op.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& op)
{
    if (this != &op)
    {
        this->grade = op.grade;
    }
    return (*this);
}

void Bureaucrat::increment( void )
{
    --grade;
    if (grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrement( void )
{
    ++grade;
    if (grade > 150)
        throw GradeTooLowException();
}

const std::string& Bureaucrat::getName( void ) const
{
    return (this->Name);
}

int Bureaucrat::getGrade( void ) const
{
    return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return ("Bureaucrat Grade is high");
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return ("Bureaucrat Grade is Low");
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "[" << this->getName() << "]" << " signed to " << form.getName() << std::endl;
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cout << "[" << this->getName() << "]"
        << " couldn't sign to "
        << form.getName()
        << " because " << e.what()
        << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& buro)
{
    cout << buro.getName() << "'s , bureaucrat grade " << buro.getGrade();
    return (cout);
}