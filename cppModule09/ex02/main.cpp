/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:08 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/17 20:30:48 by dmartiro         ###   ########.fr       */
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
        
        // pmerge.showUnsortedArray();
        // std::cout << "--------------------" << std::endl;
        
        // std::cout << "Vector: ";
        
        // std::cout << std::endl;
        
        // std::cout << "List: ";
        // pmerge.lookList();
        // std::vector<int>vector = {5, 8, 1, 7, 4, 3, 54, 8, 1};
        pmerge.lookVector();
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}