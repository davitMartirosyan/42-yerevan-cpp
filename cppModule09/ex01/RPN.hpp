/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:21:09 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/13 23:21:12 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<std::string>rpn;
        const std::string m;
        static const std::string& symbols;
    public:
        RPN( void );
        RPN(char **v);
        RPN(const RPN& op);
        RPN& operator=(const RPN& op);
        ~RPN();
    public:
        const std::string mathString(char** vector);
        void filter( void );
};

#endif