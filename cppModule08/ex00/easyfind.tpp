/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:47:39 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/28 21:26:11 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> 
typename T::const_iterator easyfind(T const & param, int const integer)
{
    typename T::const_iterator it;
    std::find(param.begin(), param.end(), integer);
    if (it != param.end())
        return (it);
    throw std::invalid_argument("Occurances not found");
}