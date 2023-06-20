/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:03:58 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/20 19:47:57 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base { public: void t( void ){std::cout << "test" << std::endl;} };

class B : public Base {  };

class C : public Base {  };

Base * generate( void );
void identify(Base * p);
void identify(Base & r);

#endif