/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:45:03 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/20 00:16:56 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool    special_case(std::string str)
{
    int i = 0;
    std::string special[5] = {"nan", "nanf", "inf", "+inf", "-inf"};

    while (str != special[i] && !special[i].empty())
        i++;
    switch (i)
    {
        case 0:
            return (true);
        case 1:
            return (true);
        case 2:
            return (true);
        case 3:
            return (true);
        case 4:
            return (true);
        default:
            return (false);
    }
}

bool    checker(std::string str)
{
    bool    point = false;

    if (str.empty())
        return (false);
    if (special_case(str))
        return (true);
    if (str.length() == 1)
        return (true);
    for (size_t j = 0; str.length() > j; j++)
    {
        if (str[0] == '+' || str[0] == '-')
            j++;
        if (!isdigit(str[j])) 
        {
            if (j + 1 == str.length() && str[j] == 'f')
                break ;
            else if (str[j] == '.' && !point)
                point = true;
            else
                return (false);
        }
    }
    return (true);
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter  &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void) other;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &str)
{
    if (checker(str))
    {
        std::cout << "de locossss" << std::endl;
    }
    else
        std::cout << "me cago en los muertos del payo que me ha robao el gallo" << std::endl;
}