/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:01:23 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/28 00:43:47 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string const & type;
    public:
        AMateria(std::string const & type);
        AMateria( void );
        AMateria(const AMateria& op);
        AMateria operator=(const AMateria& op);
        ~AMateria();
    public:
        std::string const & getType( void ) const;
        virtual AMateria * clone( void ) const = 0;
        virtual void use(ICharacter& target);
};

#endif