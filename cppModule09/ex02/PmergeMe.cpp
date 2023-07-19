/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:20:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/19 21:34:41 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

size_t PmergeMe::errn = 0;
size_t PmergeMe::numberCount = 0;
size_t PmergeMe::threshold = 10;
bool PmergeMe::allocated = false;

PmergeMe::PmergeMe( void )
   : pmerge("2 1 5 3 9 4 7 8 0")
{
}

PmergeMe::PmergeMe(char **av)
{
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
    if (allocated)
        delete [] massive;
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
    std::vector<std::string> strnums;
    for (size_t i = 0; i < pmerge.size(); i++)
    {
        if (pmerge[i] == '+')
        {
            if (pmerge[i] == '+' && std::isdigit(pmerge[i+1]) &&
                (!std::isdigit(pmerge[i-1]) || std::isspace(pmerge[i-1])))
            {
                pmerge[i] = 0;
                n += pmerge[++i];   
            }
            else
                this->errn = 1;
        }
        else if (std::isdigit(pmerge[i]))
            n += pmerge[i];
        else if (!n.empty())
        {
            numberCount++;
            strnums.push_back(n);   
            n.clear();
        }
    }
    if (this->errn != 0)
        throw std::runtime_error("Error: Incorrect Inputs");
    this->massive = new int[strnums.size()];
    allocated = true;
    for(size_t i = 0; i < strnums.size(); i++)
        this->massive[i] = std::atoi(strnums[i].c_str());
}

std::vector<int> PmergeMe::extractVector( void )
{
    std::vector<int> tmp;
    for(size_t i = 0; i < numberCount; i++)
        tmp.push_back(massive[i]);
    return (tmp);   
}

std::list<int> PmergeMe::extractList( void )
{
    std::list<int> tmp;
    for(size_t i = 0; i < numberCount; i++)
        tmp.push_back(massive[i]);
    return (tmp);
}

std::deque<int> PmergeMe::extractDeque( void )
{
    std::deque<int> tmp;
    for(size_t i = 0; i < numberCount; i++)
        tmp.push_back(massive[i]);
    return (tmp);
}

std::string PmergeMe::before( void )
{
    return (trim(this->pmerge));
}

std::string PmergeMe::rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(" \n\t\f\v");
    return (end == std::string::npos ? "" : s.substr(0, end + 1));
}

std::string PmergeMe::ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(" \n\t\f\v");
    return (start == std::string::npos ? s : s.substr(start));
}

std::string PmergeMe::trim(const std::string &s)
{
    return (ltrim(rtrim(s)));
}

void PmergeMe::printVector(std::vector<int> &v, int flag)
{
	std::vector<int>::iterator i = v.begin();

	if (flag == 0)
		std::cout<<"Before: ";
	else
		std::cout<<"After : ";
	for (; i != v.end() && i != v.begin() + 8; i++)
	{
		std::cout << *i << " ";
	}
	if (v.size() > 8)
	{
		std::cout<<" [...]";
	}
	std::cout<<std::endl;
}

void PmergeMe::printDuration(std)
{
	printVector(this->_v, 1);
	// printList(this->_l, 1);
	double sec1 = ((_endTimeV.tv_sec * 1000 + _endTimeV.tv_usec * 0.001) - (_startTimeV.tv_sec * 1000 + _startTimeV.tv_usec * 0.001));
	double sec2 =((_endTimeL.tv_sec * 1000 + _endTimeL.tv_usec * 0.001) - (_startTimeL.tv_sec * 1000 + _startTimeL.tv_usec * 0.001));
	std::cout<<"Time to process a range of   "<< _v.size() << " elements with std::vector[..] : "<<std::flush;
	std::cout<<  sec1 <<" us" << std::endl;
	std::cout<<"Time to process a range of   "<< _l.size() << " elements with std::list[..] : "<<std::flush;
	std::cout<<  sec2 <<" us" << std::endl;
}