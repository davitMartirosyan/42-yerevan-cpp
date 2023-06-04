/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 01:27:14 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/04 07:04:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
    : AForm("dflrobotomy", 72, 45), target("dflrobotomy")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string tar)
    : AForm(tar, 72, 45), target(tar)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& op)
    : AForm(op.getName(), op.getGradeSign(), op.getGradeExecute())
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
    if (this->getSignedStatus() == false)
        throw AForm::GradeNotSignedIn();
    else if (executor.getGrade() > getGradeExecute())
        throw AForm::GradeTooLowException();
    std::cout << "Dxkly cxkly..... DDDDDDD... grrrrrr..." << std::endl;
    srand(time(0));
    if ((double)(rand()) / (double)(rand()) >= 0.05)
        std::cout << this->getName() << " robotomized succesfully 50% of the time." << std::endl;
    else
        std::cout << this->getName() << " robotomy failed." << std::endl;
}