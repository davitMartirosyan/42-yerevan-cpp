/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 01:27:24 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 01:06:47 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
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