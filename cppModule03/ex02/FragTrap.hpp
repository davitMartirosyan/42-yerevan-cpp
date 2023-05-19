/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:53:47 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/19 01:12:36 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap(const FragTrap& old);
        FragTrap& operator=(const FragTrap& old);
        FragTrap(const std::string& name);
        ~FragTrap();
    public:
        void highFivesGuys(void);
};

#endif