/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:25:18 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/03 12:20:00 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string Name;
        int grade;
    public:
        Bureaucrat( void );
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& op);
        Bureaucrat& operator=(const Bureaucrat& op);
    public:
        void increment( void );
        void decrement( void );
        const std::string& getName( void ) const;
        int getGrade( void ) const;
        void signForm(AForm& AForm);
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what( void ) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what( void ) const throw();  
        };
    public:
        void executeForm(AForm const &form);
};
std::ostream& operator<<(std::ostream& cout, const Bureaucrat& buro);
#endif