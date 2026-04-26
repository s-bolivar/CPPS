/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:10:00 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/26 21:02:58 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
 
int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: no arguments provided.\n"
                  << "Usage: ./PmergeMe <positive integers...>\n";
        return 1;
    }
 
    try
    {
        PmergeMe pmm;
        pmm.parseInput(argc, argv);
        std::cout << "Before: ";
        for (int i = 1; i < argc; ++i)
        {
            if (i > 1) std::cout << " ";
            std::cout << argv[i];
        }
        std::cout << "\n";
        pmm.sort();
        std::cout << "After:  ";
        pmm.display();
        int n = argc - 1;
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << n
                  << " elements with std::vector : "
                  << pmm.getVecTime() << " us\n";
        std::cout << "Time to process a range of " << n
                  << " elements with std::deque  : "
                  << pmm.getDeqTime() << " us\n";
 
    } catch (const std::exception& e)
	{
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
 
    return 0;
}