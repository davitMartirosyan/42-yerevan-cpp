/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:27:54 by dmartiro          #+#    #+#             */
/*   Updated: 2023/06/30 01:15:08 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <stack>

int main( void )
{
    
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