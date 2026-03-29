/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:14:38 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/28 16:30:30 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
        return 1;
    std::vector<int> cont;
    for (int i = 0; i < 10; i++)
        cont.push_back(i);
    try
    {
        std::cout << *easyfind(cont, atoi(av[1])) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}