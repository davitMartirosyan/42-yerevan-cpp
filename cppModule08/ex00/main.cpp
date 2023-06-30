/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:27:54 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/30 14:59:04 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>

int main( void )
{
    try
    {
            // std::vector
            const std::vector<int> vectorArray = {1, 2, 3, 4, 5};

            // std::list
            std::list<int> listArray = {1, 2, 3, 4, 5};

            // std::deque
            std::deque<int> dequeArray = {1, 2, 3, 4, 5};

            // std::forward_list
            std::forward_list<int> forwardListArray = {1, 2, 3, 4, 5};

            // std::array
            std::array<int, 5> arrayArray = {1, 2, 3, 4, 5};

            // std::set
            std::set<int> setArray = {1, 2, 3, 4, 5};

            std::stack<int> stack;
            stack.push(1);
            stack.push(2);
            stack.push(3);
            stack.push(4);

            std::cout << *easyfind(vectorArray, 3242) << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

}


// int main( void )
// {
//     try
//     {
//         int arg[] = {1, 324, 345, 232, 3424, 5345, 454645, 54643, 234};
//         size_t len = sizeof(arg) / sizeof(arg[0]);
        
//         std::vector<int> vector;
//         std::deque<int> deque;
//         std::list<int> list;
        
//         for(size_t i = 0; i < len; i++)
//         {
//             vector.push_back(arg[i]);
//             deque.push_back(arg[i]);
//             list.push_back(arg[i]);    
//         }


//         std::vector<int>::iterator itv = vector.begin();
//         std::deque<int>::iterator itd = deque.begin();
//         std::list<int>::iterator itl = list.begin();

//         for(; itv != vector.end() && itd != deque.end() &&  itl != list.end(); itv++, itd++, itl++)
//         {
//             std::cout << *itv << " " << *itd << " " << *itl << std::endl;
//         }     
        

//         std::cout << "_________________________" << std::endl;
//         // easyfind(vector, 232);
//         // easyfind(deque, 232);
//     }
//     catch(const std::exception & e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }