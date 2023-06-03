/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:44:46 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/03 14:31:49 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& op);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& op);
        ~ShrubberyCreationForm();
    public:
        class GradeToHighException : public std::exception
        {
            public:
                virtual const char *what( void ) const throw();
        };
        class GradeToLowException : public std::exception
        {
            public:
                virtual const char *what( void ) const throw();
        };
    public:
        void execute(Bureaucrat const &bureaucrat) const;
};
#endif