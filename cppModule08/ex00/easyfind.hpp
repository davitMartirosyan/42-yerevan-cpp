/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:30:28 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/30 01:19:49 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <stdexcept>

template <typename T> T easyfind(const T &container, int integer);
#ifndef TPP
#define TPP
#include "easyfind.tpp"
#endif
#endif