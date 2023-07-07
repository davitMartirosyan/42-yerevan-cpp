/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:33:24 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/07 18:35:16 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack( void ) : std::stack<T, Container>()
{
}

template<typename T, typename Container>
typename std::stack<T, Container>::container_type::iterator MutantStack<T, Container>::begin( void )
{
    return (this->c.begin());
}

template<typename T, typename Container>
typename std::stack<T, Container>::container_type::iterator MutantStack<T, Container>::end( void )
{
    return (this->c.end());
}


template<typename T, typename Container>
typename std::stack<T, Container>::container_type::const_iterator MutantStack<T, Container>::begin( void ) const
{
    return (this->c.begin());
}

template<typename T, typename Container>
typename std::stack<T, Container>::container_type::const_iterator MutantStack<T, Container>::end( void ) const
{
    return (this->c.end());
}
