/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:11:32 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/20 01:27:59 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base * generate( void )
{
    Base *gen;
    int ran = 3;
    return (NULL);
}

void identify(Base * p)
{
    p->test();
}

void identify(Base & r)
{
    r.test();
}