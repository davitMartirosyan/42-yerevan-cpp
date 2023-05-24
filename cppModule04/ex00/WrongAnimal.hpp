/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:03:05 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 21:11:46 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal( void );
        WrongAnimal(const WrongAnimal& op);
        WrongAnimal& operator=(const WrongAnimal& op);
        virtual ~WrongAnimal();
        std::string getType( void ) const;
        void makeSound( void ) const;
    protected:
        std::string type;
};

#endif