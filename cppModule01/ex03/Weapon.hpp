/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:38:02 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/04 03:04:47 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon( void );
		Weapon(std::string type);
		~Weapon();
		const std::string& getType( void );
		void setType(std::string type);
};

#endif