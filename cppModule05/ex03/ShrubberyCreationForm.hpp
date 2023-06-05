/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:44:46 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/06 01:19:18 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
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
        void execute(Bureaucrat const &bureaucrat) const;
};
#endif