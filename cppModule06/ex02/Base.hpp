/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:03:58 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/20 01:20:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
    public:
        virtual void test(void ) {std::cout << "Base::test" << std::endl;}
        virtual ~Base(){}
};

class A : public Base { public: void test( void ) {std::cout << "A::test"; }; int x; };

class B : public Base {   };

class C : public Base {   };

class D { public: virtual ~D(){}};

Base * generate( void );
void identify(Base * p);
void identify(Base & r);

#endif