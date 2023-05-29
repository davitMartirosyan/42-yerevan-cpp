/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:02:42 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/29 04:06:46 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
 
class Cure : public AMateria
{
    public:
        Cure( void );
        Cure(const Cure& op);
        Cure& operator=(const Cure& op);
        ~Cure();
    public:
        AMateria* clone( void ) const;
        void use(ICharacter& target);
};

#endif