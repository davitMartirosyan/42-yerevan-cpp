/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:09:08 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/20 20:10:50 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        (void)av;
        (void)ac;
        // std::cout << std::fixed << std::setprecision(5);
        PmergeMe p(av);
        p.extract();
        std::vector<int> vec = p.extractAsVector();
        // std::deque<int> deq = p.extractAsDeque();
        
        // p.sortVec(vec, 0, vec.size());
        // for(size_t i = 0; i < vec.size(); i++)
        //     std::cout << vec[i] << " ";
        // std::cout << std::endl;



        // Before: 3 5 9 7 4
        // After: 3 4 5 7 9
        // Time to process a range of 5 elements with std::[..] : 0.00031 us
        // Time to process a range of 5 elements with std::[..] : 0.00014 us
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}