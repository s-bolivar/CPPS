/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:10:39 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/07 22:16:02 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **av, int ac)
{
    for (int i = 0; i < ac - 1; i++)
        first.push_back(atoi(av[i + 1]));
    dit = first.begin() + 1;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe    &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        first = other.first;
        second = other.second;
        dit = other.dit;
        vit = other.vit;
    }
    return (*this);
}

PmergeMe::~PmergeMe() {}


void    PmergeMe::organize()
{
    gettimeofday(&dstart, NULL);
    for (size_t i = 0; i < first.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (first[i] > first[i + 1] && i != first.size() - 1)
                std::swap(first[i], first[i + 1]);
        }
        else
            second.push_back(first[i]);
    }
    vit = second.begin();
    while (dit != first.end())
    {
        dit = first.erase(dit);
        if (dit != first.end())
            dit++;
    }
    gettimeofday(&dend, NULL);
    dduration = (dend.tv_sec - dstart.tv_sec) + (dend.tv_usec - dstart.tv_usec);
    gettimeofday(&vstart, NULL);
    for (size_t i = 0; i < first.size(); i++)
    {
        vit = std::lower_bound(second.begin(), second.end(), first[i]);
        second.insert(vit, first[i]);
    }
    gettimeofday(&vend, NULL);
    vduration = (vend.tv_sec - vstart.tv_sec) + (vend.tv_usec - vstart.tv_usec);
}

void    PmergeMe::printSecond() const
{
    for (size_t i = 0; i < second.size(); i++)
    {
        std::cout << second[i] << " ";
    }
    std::cout << std::endl;    
}

void    PmergeMe::printDurations() const
{
    std::cout << "time to process: " << dduration << " microsegundos" << std::endl;
    std::cout << "time to process: " << vduration << " microsegundos" << std::endl;
}