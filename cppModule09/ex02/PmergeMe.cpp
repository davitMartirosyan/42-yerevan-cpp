/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:20:31 by dmartiro          #+#    #+#             */
/*   Updated: 2023/07/22 18:14:11 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

size_t PmergeMe::errn = 0;
size_t PmergeMe::numberCount = 0;
int PmergeMe::threshold = 15;
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
        delete [] massiveDynamics;
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
    this->massiveDynamics = new int[strnums.size()];
    allocated = true;
    for(size_t i = 0; i < strnums.size(); i++)
        this->massiveDynamics[i] = std::atoi(strnums[i].c_str());
}

std::vector<int> PmergeMe::extractAsVector( void )
{
    std::vector<int> tmp;
    for(size_t i = 0; i < numberCount; i++)
        tmp.push_back(massiveDynamics[i]);
    return (tmp);   
}

std::list<int> PmergeMe::extractList( void )
{
    std::list<int> tmp;
    for(size_t i = 0; i < numberCount; i++)
        tmp.push_back(massiveDynamics[i]);
    return (tmp);
}

std::deque<int> PmergeMe::extractAsDeque( void )
{
    std::deque<int> tmp;
    for(size_t i = 0; i < numberCount; i++)
        tmp.push_back(massiveDynamics[i]);
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

void PmergeMe::insertionSortVector(std::vector<int>&massive, int b, int e)
{
    for(int i = b + 1; i <= e; i++)
    {
        int pos = i - 1;
        int key = massive[i];
        while (pos >= b && massive[pos] > key)
        {
            massive[pos + 1] = massive[pos];
            pos--;
        }
        massive[pos + 1] = key;
    }
}

void PmergeMe::insertionSortDeque(std::deque<int>&massive, int b, int e)
{
    for(int i = b + 1; i <= e; i++)
    {
        int pos = i - 1;
        int key = massive[i];
        while (pos >= b && massive[pos] > key)
        {
            massive[pos + 1] = massive[pos];
            pos--;
        }
        massive[pos + 1] = key;
    }
}

void PmergeMe::mergeSortVector(std::vector<int>&massive, int b, int e)
{
    if (e - b <= threshold)
        insertionSortVector(massive, b, e);
    else
    {
        int m = b + (e - b) / 2;
        mergeSortVector(massive, b, m);
        mergeSortVector(massive, m+1, e);
        mergeSortVector(massive, b, m, e);
    }
}

void PmergeMe::mergeSortVector(std::vector<int>&massive, int b, int m, int e)
{
    int l = m - b + 1;
    int r = e - m;
    std::vector<int>leftPart(l);
    std::vector<int>rightPart(r);

    for(int i = 0; i < l; ++i)
        leftPart[i] = massive[b+i];
    for(int j = 0; j < r; ++j)
        rightPart[j] = massive[m+1+j];

    int lf = 0;
    int rf = 0;
    int merged = b;
    while (lf < l && rf < r)
    {
        if (leftPart[lf] <= rightPart[rf])
        {
            massive[merged] = leftPart[lf];
            lf++;
        }
        else
        {
            massive[merged] = rightPart[rf];
            rf++;
        }
        merged++;
    }

    while (lf < l)
    {
        massive[merged] = leftPart[lf];
        lf++;
        merged++;
    }

    while (rf < r)
    {
        massive[merged] = rightPart[rf];
        rf++;
        merged++;
    }
}

void PmergeMe::mergeSortDeque(std::deque<int>&massive, int b, int e)
{
    if (b < e)
    {
        int m = (b + e) / 2;
        if ((e - b) > threshold)
        {
            mergeSortDeque(massive, b, m);
            mergeSortDeque(massive, m+1, e);
            mergeSortDeque(massive, b, m, e);
        }
        else
            insertionSortDeque(massive, b, e);
    }
}

void PmergeMe::mergeSortDeque(std::deque<int>&massive, int b, int m, int e)
{
    std::deque<int>leftPart(m-b+1);
    std::deque<int>rightPart(e-m);

    for(size_t i = 0; i < leftPart.size(); i++)
        leftPart[i] = massive[b+i];
    for(size_t i = 0; i < rightPart.size(); i++)
        rightPart[i] = massive[m+i+1];

    size_t lf = 0;
    size_t rf = 0;
    size_t merged = b;
    while (lf < leftPart.size() && rf < rightPart.size())
    {
        if (leftPart[lf] <= rightPart[rf])
        {
            massive[merged] = leftPart[lf];
            ++lf;
        }
        else
        {
            massive[merged] = rightPart[rf];
            ++rf;
        }
        ++merged;
    }

    while (lf < leftPart.size())
    {
        massive[merged] = leftPart[lf];
        ++lf;
        ++merged;
    }

    while (rf < rightPart.size())
    {
        massive[merged] = rightPart[rf];
        ++rf;
        ++merged;
    }
}

void PmergeMe::getUnsorted( void )
{
    for(size_t i = 0; i < numberCount; i++)
        std::cout << massiveDynamics[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::getSorted(std::vector<int>&sorted)
{
    for(size_t i = 0; i < sorted.size(); i++)
        std::cout << sorted[i] << " ";
    std::cout << std::endl;
}

double PmergeMe::getTime(struct timeval& start, struct timeval& end)
{
    long sec = end.tv_sec - start.tv_sec;
    long mil = end.tv_usec - start.tv_usec;
    long dur = sec * 1000000 + mil;
    return (dur / 1000.0000);
}