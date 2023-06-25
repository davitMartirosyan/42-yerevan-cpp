/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:21:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/22 18:18:52 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T1> T1 min(T1 v1, T1 v2)
{
    return ((v1 > v2) ? v2 : v1);          
};

template<typename T1> T1 max(T1 v1, T1 v2)
{
    return ((v1 > v2) ? v1 : v2);
};

template<typename T1> void swap(T1 &v1, T1 &v2)
{
    T1 tmp = v1;
    v1 = v2;
    v2 = tmp;
}

#endif