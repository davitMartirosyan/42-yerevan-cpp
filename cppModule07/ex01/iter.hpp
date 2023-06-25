/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:59:46 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/22 21:54:57 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

void increment(int *item)
{
    *item += 10;
}

template<typename addr, typename len, typename funcarg> void iter(addr address, len size, void (*func)(funcarg v2))
{
    for(int i = 0; i < size; i++)
        (*func)((*address+i));   
}

#endif