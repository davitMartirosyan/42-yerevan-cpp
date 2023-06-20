/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:11:32 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/20 19:48:23 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base * generate( void )
{
    std::srand(time(0));
    int r = std::rand() % 3;

    if (r == 0)
        return (new A());
    else if (r == 1)
        return (new B());
    return (new C());
}

void identify(Base * p)
{
    A* a = dynamic_cast<A*>(p);
    if (a)
        std::cout << "A" << std::endl;
    B* b = dynamic_cast<B*>(p);
    if (b)
        std::cout << "B" << std::endl;
    C* c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "C" << std::endl;
}

void identify(Base & r)
{
    try
    {
        A& a = dynamic_cast<A&>(r);
        (void)a;
            std::cout << "A" << std::endl;  
    }
    catch(const std::bad_cast & e)
    {
        (void)e;
    }
    
    try
    {
        B& b = dynamic_cast<B&>(r);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::bad_cast & e)
    {
        (void)e;
    }
    
    try
    {
        C& c = dynamic_cast<C&>(r);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::bad_cast & e)
    {
        (void)e;
    }   
}