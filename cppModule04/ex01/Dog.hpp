/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:01:34 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/25 00:39:49 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
    private:
      Brain* dogbrain;
    public:
      Dog( void );
      Dog(const Dog& op);
      Dog& operator=(const Dog& op);
      ~Dog();
      void makeSound( void ) const;
};

#endif