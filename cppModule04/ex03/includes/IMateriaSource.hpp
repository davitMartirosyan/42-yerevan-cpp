/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:37:39 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/29 00:48:49 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource(){}      
        virtual void learnMateria(AMateria *m) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif