/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:20:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/16 16:10:31 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void )
   : pmerge("2 1 5 3 9 4 7 8 0")
{
    this->errn = 0;
}

PmergeMe::PmergeMe(char **av)
{
    this->errn = 0;
    this->bind(av);
    if (pmerge.find_first_not_of(" ") == std::string::npos 
        || pmerge.find_first_not_of("0123456789+ ") != std::string::npos)
        throw std::runtime_error("Error: Incorrect Inputs");
}

PmergeMe::PmergeMe(const PmergeMe& op)
{
    (void)op;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& op)
{
    (void)op;
    return (*this);
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::bind(char **av)
{
    int i = 0;
    while (av[++i])
    {
        pmerge += av[i];
        pmerge += " ";
    }
}

void PmergeMe::extract( void )
{
    std::string n;
    for (size_t i = 0; i < pmerge.size(); i++)
    {
        if (pmerge[i] == '+')
        {
            if (pmerge[i] == '+' && std::isdigit(pmerge[i+1]))
            {
                pmerge[i] = 0;
                n += pmerge[++i];   
            }
            else
                this->errn = 1;
        }
        else if (std::isdigit(pmerge[i]))
            n += pmerge[i];
        else
        {
            // std::cout << ":" << n << ":" << std::endl;
            this->vector.push_back(std::atoi(n.c_str()));
            this->list.push_back(std::atoi(n.c_str()));
            n.clear();
        }
    }
    if (this->errn != 0)
        throw std::runtime_error("Error: Incorrect Inputs");
}

void PmergeMe::lookVector( void )
{
    std::vector<int>::iterator vec;
    for(vec = vector.begin(); vec != vector.end(); vec++)
        std::cout << *vec << " ";
    std::cout << std::endl;
}
void PmergeMe::lookList( void )
{
    std::list<int>::iterator lst;
    for(lst = list.begin(); lst != list.end(); lst++)
        std::cout << *lst << " ";
    std::cout << std::endl;
}

void PmergeMe::showUnsortedArray( void )
{
    std::cout << pmerge << std::endl;
}