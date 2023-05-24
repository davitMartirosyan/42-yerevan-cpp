/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:56:53 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 21:18:56 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    public:
        Animal( void );
        Animal(const Animal& op);
        Animal& operator=(const Animal& op);
        virtual ~Animal();
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
    protected:
        std::string type;
};

#endif