/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:24:25 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/07 21:26:53 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
#define MUTANT_HPP
#include <iostream>
#include <stack>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
        MutantStack( void );
        MutantStack<T, Container>(MutantStack<T, Container> const & op) : std::stack<T, Container>(op){};
        ~MutantStack<T, Container>() {};
        MutantStack<T, Container>& operator=(MutantStack<T, Container> const & op)
        {
            if (this != &op)
                this->c = op.c;
            return (*this);
        }
       iterator begin( void );
       iterator end( void );
       const_iterator begin( void ) const;
       const_iterator end( void ) const;
};

#ifndef TPP
#define TPP
#include "MutantStack.tpp"
#endif

#endif