/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 05:49:12 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 01:06:43 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public: 
        PresidentialPardonForm( void );
        PresidentialPardonForm(const std::string tar);
        PresidentialPardonForm(const PresidentialPardonForm& op);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& op);
        ~PresidentialPardonForm();
    public:
        void execute(Bureaucrat const & executor) const;  
};

#endif