/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:42:08 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/12 21:28:27 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void to_upper(std::string &str)
{
    if (str.empty())
        return ;
    for (size_t i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
}

void    is_even(int &n)
{
    if (n % 2 == 0)
        std::cout << "even" << std::endl;
    else
        std::cout << "odd" << std::endl;
}

int main()
{
    int n[] = {1, 2, 3};
    ::Iter(n, 3, is_even);
    std::string str[] = {"hola", "mundo", "tus muertos"};
    ::Iter(str, 4, to_upper);
    std::cout << str[0] << std::endl;
    std::cout << str[1] << std::endl;
    std::cout << str[2] << std::endl;
}