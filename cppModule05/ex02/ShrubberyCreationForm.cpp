/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:07:12 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/03 15:11:07 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
    : AForm("dflname", 145, 137), target("dflName")
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
    if(executor.getGrade() > getGradeExecute())
        throw AForm::GradeTooLowException();
    std::cout << "ok\n";
    std::cout << getGradeExecute() << std::endl;
    std::ofstream file(target+"_shrubbery");
    file << "                        .:." << std::endl
         << "                        :|:" << std::endl
         << "                       .:|:." << std::endl
         << "                       ::|::" << std::endl
         << "        :.             ::|::             .:" << std::endl
         << "        :|:.          .::|::.          .:|:" << std::endl
         << "        ::|:.         :::|:::         .:|:;" << std::endl
         << "        `::|:.        :::|:::        .:|::'" << std::endl
         << "         ::|::.       :::|:::       .::|:;" << std::endl
         << "         `::|::.      :::|:::      .::|::'" << std::endl
         << "          :::|::.     :::|:::     .::|::;" << std::endl
         << "          `:::|::.    :::|:::    .::|::;'" << std::endl
         << " `::.      `:::|::.   :::|:::   .::|::;'      .:;'" << std::endl
         << "  `:::..    `:::|::.  :::|:::  .::|::;'    ..::;'" << std::endl
         << "   `::::::.  `:::|::. :::|::: .::|::;'  .:::::;'" << std::endl
         << "      `::::::.`:::|::.:::|::;.::|::;'.:::::;'" << std::endl
         << "        `::::::.`::|::.::|::.::|::'.:::::;'" << std::endl
         << "           `:::::::::|:::|:::|::::::::;'" << std::endl
         << "              ``:::::::|:|::|:::::;''" << std::endl
         << "                   `::::::::::;'" << std::endl
         << "                  .:;'' ::: ``::." << std::endl
         << "                        : : :" << std::endl
         << "                         ':`" << std::endl;
         file.close();
}