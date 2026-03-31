/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 15:33:57 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/31 01:34:13 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    std::ifstream   fdata("data.csv");
    std::ifstream   input(av[1]);
    BitcoinExchange     bt;
    if (ac != 2 || !input.is_open() || !fdata.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    bt.readFileToLine(input);
    if (bt.getLine() != "date | value")
    {
        std::cout << "Error: incorrect format" << std::endl;
        return 1;
    }
    while (!input.eof())
    {
        bt.readFileToLine(input);
        bt.parser();
        if (bt.getError())
            bt.print_error();
        else
            std::cout << bt.getLine() << " => " << bt.exchange() << std::endl;
    }
}