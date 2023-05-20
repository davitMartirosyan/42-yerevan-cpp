/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 03:19:27 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 04:09:12 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMOND_TRAP_HPP_
#define _DIAMOND_TRAP_HPP_
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap( void );
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& old);
        DiamondTrap& operator=(const DiamondTrap& old);
        virtual ~DiamondTrap();
    public:
        void whoAmI( void );
        void attack(const std::string& target);
};

#endif