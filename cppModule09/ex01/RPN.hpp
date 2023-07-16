/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:21:09 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/16 12:51:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <stdexcept>

class RPN
{
    private:
        double l;
        double r;
        std::stack<int>stack;
        std::string m;
        static const std::string& symbols;
        static int items;
        const std::string mathString(char** vector);
    public:
        RPN( void );
        RPN(char **v);
        RPN(const RPN& op);
        RPN& operator=(const RPN& op);
        ~RPN();
    public:
        void extract( void );
        bool filter( void );
        int inFixResult( void );
    private:
        void operation(char op);
        void add( void );
        void sub( void );
        void mult( void );
        void div( void );
        void take( void );
};
#endif