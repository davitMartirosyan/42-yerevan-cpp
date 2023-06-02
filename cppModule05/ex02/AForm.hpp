/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:31:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/02 05:58:01 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private:
        const std::string Name;
        bool signedStatus;
        const int gradeRequiredSign;
        const int gradeRequiredExecute;
        AForm( void );
    public:
        AForm(const std::string name, int grSign, int grExec);
        AForm(const AForm& op);
        AForm& operator=(const AForm& op);
        ~AForm();
    public:
        const std::string getName( void ) const;
        bool getSignedStatus( void ) const;
        int getGradeSign( void ) const;
        int getGradeExecute( void ) const;
    public:
        void beSigned(Bureaucrat& buro);
    public:
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    public:
        virtual void execute(Bureaucrat &bureaucrat) = 0;
};

std::ostream& operator<<(std::ostream& co, const AForm& foo);
#endif