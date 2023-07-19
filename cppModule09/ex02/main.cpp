/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:08 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/19 21:38:29 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        (void)ac;
        std::cout << std::fixed << std::setprecision(5);
        PmergeMe pmerge(av);
        pmerge.extract();
        std::vector<int> vector = pmerge.extractVector();
        std::deque<int> deque = pmerge.extractDeque();

        std::cout << "Before: " << pmerge.before() << std::endl;
        std::cout << "After: ";
        clock_t start = clock();
        pmerge.sort(vector, 0, vector.size() - 1);
        clock_t end = clock();
        
        

        std::vector<int>::iterator vec = vector.begin();
        for(; vec != vector.end(); vec++)
            std::cout << *vec << " ";
        std::cout<< std::endl;

        
        std::cout << "Time to process a range of " 
            << vector.size() 
            << " elements with std::[vector] : "
            << static_cast<double>(end - start) / CLOCKS_PER_SEC * 10000000.0
        << std::endl;



        // start = clock();
        start = printDuration();
        pmerge.sort(deque, 0, vector.size() - 1);
        // end = clock();
        end = printDuration();

        std::cout << "Time to process a range of " 
            << deque.size() 
            << " elements with std::[deque] : "
            << static_cast<double>(end - start) / CLOCKS_PER_SEC * 10000000.0
        << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}