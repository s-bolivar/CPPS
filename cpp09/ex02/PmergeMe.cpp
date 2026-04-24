/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:10:39 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/25 00:41:33 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **av, int ac)
{
    odd_number = 0;
    for (int i = 0; i < ac - 1; i++)
        first.push_back(atoi(av[i + 1]));
    dit = first.begin() + 1;
    if (first.size() % 2 == 1)
        odd_number = first[first.size() - 1];
    index = 0;
    n_elements = 1;
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
    if (!first_swap)
    {
        for (size_t i = 0; i < first.size(); i++)
        {
            if (first[i] > first[i + 1])
                std::swap(first[i], first[i + 1]);
            i++;
        }
        n_elements *= 2;
        first_swap = true;
    }
    else
    {
        index = n_elements - 1;
        for (; index < first.size(); index += n_elements * 2)
        {
            size_t left = index - (n_elements - 1);
            size_t right = left + n_elements;

            if (right + n_elements - 1 >= first.size())
                break;

            if (first[index] > first[index + n_elements])
            {
                for (size_t j = 0; j < n_elements; j++)
                    std::swap(first[left + j], first[right + j]);
            }
        }
        n_elements *= 2;
    }   
    std::cout << "vector 1:";
    for (size_t i = 0; i < first.size(); i++)
            std::cout << first[i] << " ";
    std::cout << std::endl;
    if (n_elements * 2 < first.size())
        organize();
    //gettimeofday(&dend, NULL);
    //dduration = (dend.tv_sec - dstart.tv_sec) + (dend.tv_usec - dstart.tv_usec);
    //gettimeofday(&vstart, NULL);
}

void    PmergeMe::split()
{
    for (size_t i = 1; i < first.size(); i += 2)
            second.push_back(first[i]);
    std::cout << odd_number << std::endl;
    while (dit != first.end())
    {
        dit = first.erase(dit);
        if (dit != first.end())
            dit++;
    }
    if (odd_number)
    {
        first.erase(first.end() - 1);
        first.push_back(odd_number);
    }
    std::cout << "vector 2: ";
    for (size_t i = 0; i < first.size(); i++)
            std::cout << first[i] << " ";
    std::cout << std::endl;
    std::cout << "vector 2: ";
    for (size_t i = 0; i < second.size(); i++)
            std::cout << second[i] << " ";
    std::cout << std::endl;
}

void    PmergeMe::printSecond() const
{
    for (size_t i = 0; i < second.size(); i++)
    {
        std::cout << second[i] << " ";
    }
    std::cout << std::endl;    
}

void    PmergeMe::pmergeme()
{
    organize();
    split();
}

void    PmergeMe::printDurations() const
{
    std::cout << "time to process: " << dduration << " microsegundos" << std::endl;
    std::cout << "time to process: " << vduration << " microsegundos" << std::endl;
}