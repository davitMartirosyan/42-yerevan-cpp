/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:25:18 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/31 19:27:43 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what( void ) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what( void ) const throw();  
        };
};
std::ostream& operator<<(std::ostream& cout, const Bureaucrat& buro);

#endif