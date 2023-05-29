/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:52:11 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/29 04:09:30 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice(const Ice& op);
        Ice& operator=(const Ice& op);
        ~Ice();
    public:
        AMateria* clone( void ) const;
        void use(ICharacter& target);
};

#endif