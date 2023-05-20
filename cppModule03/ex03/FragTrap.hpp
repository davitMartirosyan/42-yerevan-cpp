/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:53:47 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/20 06:44:26 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& old);
        FragTrap& operator=(const FragTrap& old);
        virtual ~FragTrap();
    public:
        void highFivesGuys(void);
};

#endif