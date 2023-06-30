/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:30:28 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/30 14:58:48 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <algorithm>


template <typename T> typename T::const_iterator easyfind( T const & container, int const value)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::out_of_range("No occurance");
    return it;
}

// template <typename U> typename U::const_iterator easyfind(U& container, int const value)
// {
    
//     typename U::container_type cont = container._Get_container();
//     typename U::iterator_type it = std::find(cont.begin(), cont.end(), value);
//     if (it == cont.end())
//         throw std::out_of_range("No Occurance");
//     return (it);
// }

#endif