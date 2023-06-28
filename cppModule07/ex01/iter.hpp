/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:59:46 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/28 12:09:37 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template <typename T> void f(const T &item)
{
    std::cout << "Element : " << item << std::endl;
}

template <typename T> void iter(T *addr, size_t size, void (*func)(const T &))
{
    for(size_t i = 0; i < size; i++)
        (*func)(addr[i]);
}

template <typename T, typename Function> void iter(T *addr, size_t size, Function func)
{
    std::cout << "mta stex\n";
    for(size_t i = 0; i < size; i++)
        (*func)(addr[i]);   
}

#endif