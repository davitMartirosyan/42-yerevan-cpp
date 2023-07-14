/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:21:09 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/14 16:07:44 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>


class RPN
{
    private:
        int l;
        int r;
        std::stack<std::string>rpn;
        std::stack<int>stack;
        std::string m;
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
        bool hasExessNumbers( void );
    public:
        void operation(char op);
        void add( void );
        void sub( void );
        void mult( void );
        void div( void );
};

#endif