/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 01:27:14 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 20:22:47 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
    : Form("dflrobotomy", 72, 45), target("dflrobotomy")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string tar)
    : Form(tar, 72, 45), target(tar)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& op)
    : Form(op.getName(), op.getGradeSign(), op.getGradeExecute())
{
    this->target = op.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
    if (this != &op)
        this->target = op.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    float r;
    std::srand(static_cast<unsigned int>(time(NULL)));
    r = static_cast<float>(rand()) * static_cast<float>(1) / RAND_MAX;
    if (this->getSignedStatus() == false)
        throw Form::GradeNotSignedIn();
    else if (executor.getGrade() > getGradeExecute())
        throw Form::GradeTooLowException();
    std::cout << "Dxkly cxkly..... DDDDDDD... grrrrrr..." << std::endl;
    if ((double)(std::rand()) / (double)(std::rand()) >= 0.5)
        std::cout << this->getName() << " robotomized succesfully 50% of the time." << std::endl;
    else
        std::cout << this->getName() << " robotomy failed." << std::endl;
}