/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:21:51 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/29 03:52:01 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string Name;
        AMateria* inventory[4];
        Character( void );
    public:
        Character(std::string const & name);
        Character(const Character& op);
        Character& operator=(const Character& op);
        ~Character();
    public:
        std::string const & getName( void ) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif