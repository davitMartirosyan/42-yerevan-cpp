/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:07:12 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/08 00:25:07 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
    : AForm("dflshrubbery", 145, 137), target("dflshrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string tar)
    : AForm(tar, 145, 137), target(tar)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& op) 
    : AForm(op.getName(), op.getGradeSign(), op.getGradeExecute())
{
    this->target = op.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
    if (this != &op)
    {
        this->target = op.target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
    if (this->getSignedStatus() == false)
        throw AForm::GradeNotSignedIn();
    else if(executor.getGrade() > getGradeExecute())
        throw AForm::GradeTooLowException();
    std::string t = target + "_shrubbery";
    std::ofstream file(t.c_str());
    file << "                        .:.                        " << std::endl
         << "                        :|:                        " << std::endl
         << "                       .:|:.                       " << std::endl
         << "                       ::|::                       " << std::endl
         << "        :.             ::|::             .:        " << std::endl
         << "        :|:.          .::|::.          .:|:        " << std::endl
         << "        ::|:.         :::|:::         .:|:;        " << std::endl
         << "        `::|:.        :::|:::        .:|::'        " << std::endl
         << "         ::|::.       :::|:::       .::|:;         " << std::endl
         << "         `::|::.      :::|:::      .::|::'         " << std::endl
         << "          :::|::.     :::|:::     .::|::;          " << std::endl
         << "          `:::|::.    :::|:::    .::|::;'          " << std::endl
         << " `::.      `:::|::.   :::|:::   .::|::;'      .:;' " << std::endl
         << "  `:::..    `:::|::.  :::|:::  .::|::;'    ..::;'  " << std::endl
         << "   `::::::.  `:::|::. :::|::: .::|::;'  .:::::;'   " << std::endl
         << "      `::::::.`:::|::.:::|::;.::|::;'.:::::;'      " << std::endl
         << "        `::::::.`::|::.::|::.::|::'.:::::;'        " << std::endl
         << "           `:::::::::|:::|:::|::::::::;'           " << std::endl
         << "              ``:::::::|:|::|:::::;''              " << std::endl
         << "                   `::::::::::;'                   " << std::endl
         << "                  .:;'' ::: ``::.                  " << std::endl
         << "                       : : :                       " << std::endl
         << "                        ':`                        " << std::endl;
         file.close();
}