/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:08 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/16 16:12:45 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        (void)ac;
        PmergeMe pmerge(av);
        pmerge.extract();
        // pmerge.vectorSort();
        // pmerge.listSort();
        // pmerge.dequeSort();
        
        
        pmerge.showUnsortedArray();
        std::cout << "--------------------" << std::endl;
        
        std::cout << "Vector: ";
        pmerge.lookVector();
        
        std::cout << std::endl;
        
        std::cout << "List: ";
        pmerge.lookList();
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}