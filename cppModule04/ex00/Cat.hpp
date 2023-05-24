/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:25:38 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/24 20:37:27 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : virtual public Animal
{
    public:
        Cat( void );
        Cat(const Cat& op);
        Cat& operator=(const Cat& op);
        ~Cat();
        void makeSound( void ) const;
};

#endif