/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:56:41 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/27 00:57:43 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal *catsanddogs[10];
    delete j;
    delete i;
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
            catsanddogs[i] = new Cat();
        else
            catsanddogs[i] = new Dog();
    }
    return (0);
}