/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:30:28 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/28 21:43:50 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(T const & param, int const integer);

#ifndef TPP
#define TPP
#include "easyfind.tpp"
#endif
#endif