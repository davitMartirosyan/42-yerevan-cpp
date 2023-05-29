/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:53:21 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/29 03:46:01 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        std::string MateriaType;
        AMateria( void );
    public:
        AMateria(std::string const & type);
        AMateria(const AMateria& op);
        AMateria& operator=(const AMateria& op);
        virtual ~AMateria();
    public:
        std::string const & getType( void ) const;
        virtual AMateria* clone( void ) const = 0;
        virtual void use(ICharacter& target);        
};

#endif