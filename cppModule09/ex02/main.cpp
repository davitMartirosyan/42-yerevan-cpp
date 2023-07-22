/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:08 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/22 18:20:49 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        struct timeval t_start1, t_start2, t_end1, t_end2;
        std::cout << std::fixed << std::setprecision(5);
        PmergeMe p(av);
        p.extract();
        std::vector<int> vec = p.extractAsVector();
        std::deque<int> deq = p.extractAsDeque();
        
        gettimeofday(&t_start1, 0);
        p.mergeSortVector(vec, 0, vec.size() - 1);
        gettimeofday(&t_end1, 0);
        gettimeofday(&t_start2, 0);
        p.mergeSortDeque(deq, 0, deq.size() - 1);
        gettimeofday(&t_end2, 0);

        std::cout << "Before: ";
        p.getUnsorted();
        std::cout << "After: ";
        p.getSorted(vec);
        std::cout << "Time to process a range of "
        << vec.size() << " elements with std::[vector] " 
        << p.getTime(t_start1, t_end1) << " us" << std::endl;
        
        std::cout << "Time to process a range of "
        << vec.size() << " elements with std::[deque] " 
        << p.getTime(t_start2, t_end2) << " us" << std::endl;
        (void)ac;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
