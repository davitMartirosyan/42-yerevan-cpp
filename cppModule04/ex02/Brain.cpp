/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:27:36 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/26 19:21:15 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain dfl" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "ideal";
}

Brain::Brain(const Brain& op)
{
    std::cout << "Brain cpy" << std::endl;
    *this = op;
}

Brain& Brain::operator=(const Brain& op)
{
    if (this != &op)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = op.ideas[i];
        std::cout << "Brain =op" << std::endl;
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain dst" << std::endl;
}