/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:08 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/18 21:38:20 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        (void)ac;
        std::vector<int> vector;
        PmergeMe pmerge(av);
        pmerge.extract();
        vector = pmerge.extractVector();
        pmerge.mergeVector(vector, 0, vector.size() - 1);
        
        // pmerge.listSort();
        // pmerge.dequeSort();
        
        // pmerge.showUnsortedArray();
        // std::cout << "--------------------" << std::endl;
        
        // std::cout << "Vector: ";
        
        // std::cout << std::endl;
        
        // std::cout << "List: ";
        // pmerge.lookList();
        // pmerge.lookVector();
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}