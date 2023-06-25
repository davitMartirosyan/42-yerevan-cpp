/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:59:25 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/25 19:06:33 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main( void )
{

    int a = 10;
    int *ptr = &(*(&(*(&(*(&a))))));
    int **aptr = &ptr;
    std::cout << *aptr << std::endl;
    std::cout << &(*(*aptr)) << std::endl;
    int array[] = {1, 2, 5, 6, 3, 10, 123, 234};
    int size = sizeof(array) / sizeof(int);
    iter(&array, size, ::increment);
    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
    std::cout << array[size-1] << std::endl;
}