/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:31:40 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/01 05:02:27 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool signedStatus;
        const int gradeRequiredSign;
        const int gradeRequiredExecute;
        Form( void );
    public:
        Form(const std::string name, int grSign, int grExecute);
        Form(const Form& op);
        Form& operator=(const Form& op);
        ~Form();
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
};

std::ostream& operator<<(std::ostream& co, const Form& foo);
#endif