/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 05:49:12 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/04 06:00:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
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