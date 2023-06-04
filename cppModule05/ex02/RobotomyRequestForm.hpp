/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 01:27:24 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/04 03:30:04 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm(const std::string tar);
        RobotomyRequestForm(const RobotomyRequestForm& op);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& op);
        ~RobotomyRequestForm();
    public:
        void execute(Bureaucrat const & executor) const;
};


#endif