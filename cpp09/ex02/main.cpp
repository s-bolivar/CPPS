/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:10:00 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/24 23:53:44 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isNumber(const std::string &s)
{
    if (s.empty())
        return false;

    size_t i = 0;
    if (s[0] == '-' || s[0] == '+') 
        i = 1;

    if (i == s.size()) 
        return false;

    for (; i < s.size(); i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }

    return true;
}

void    printFirst(char **av)
{
    int i = 1;
    while (av[i])
    {
        std::cout << av[i] << " ";
        i++;
    }
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    if (ac <= 2)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    for (int i = 1; i < ac; i++)
    {
        std::string arg = av[i];
        if (!isNumber(arg))
        {
            std::cout << "Error" << arg << std::endl;
            return 1;
        }
    }
    //std::cout << "before: ";
    PmergeMe    ob(av, ac);
    ob.pmergeme();
    //printFirst(av);
    //std::cout << "after: ";
    //ob.printSecond();
    //ob.printDurations();
}