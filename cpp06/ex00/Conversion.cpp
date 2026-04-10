/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:45:03 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/10 12:37:48 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void printFloat(float c, bool conf)
{
    std::cout << "float: ";
    if (conf)
        std::cout << std::fixed << std::setprecision(1) << c << 'f' << std::endl;
    else
        std::cout << "imposible" << std::endl;
}

void printDouble(double c, bool conf)
{
    std::cout << "double: ";
    if (conf)
        std::cout << std::fixed << std::setprecision(1) << c << std::endl;
    else
        std::cout << "imposible" << std::endl;
}

void printInt(int c, bool conf)
{
    std::cout << "int: ";
    if (conf)
        std::cout << c << std::endl;
    else
        std::cout << "imposible" << std::endl;
}

void printChar(char c, bool conf)
{
    std::cout << "char: ";
    if (conf)
    {
        if (!std::iscntrl(c))
            std::cout << c << std::endl;
        else
            std::cout << "non displayable" << std::endl;
    }
    else
        std::cout << "imposible" << std::endl;
}

void toSpecial(std::string str)
{
    float n = atof(str.c_str());
    printChar(static_cast<char>(n), false);
    printInt(static_cast<int>(n), false);
    printDouble(static_cast<double>(n), true);
    printFloat(n, true);
}

void toFloat(std::string str)
{
    float n = atof(str.c_str());
    printChar(static_cast<char>(n), true);
    printInt(static_cast<int>(n), true);
    printDouble(static_cast<double>(n), true);
    printFloat(n, true);
}

void toDouble(std::string str)
{
    double n = atof(str.c_str());
    printChar(static_cast<char>(n), true);
    printInt(static_cast<int>(n), true);
    printDouble(n, true);
    printFloat(static_cast<float>(n), true);
}

void toChar(std::string str)
{
    char c;
    
    c = str[0];
    printChar(c, true);
    printInt(static_cast<int>(c), true);
    printDouble(static_cast<double>(c), true);
    printFloat(static_cast<float>(c), true);
}

void toInt(std::string str)
{
    int i;

    i = atoi(str.c_str());
    printChar(static_cast<char>(i), true);
    printInt(i, true);
    printDouble(static_cast<double>(i), true);
    printFloat(static_cast<float>(i), true);
}

bool    special_case(std::string str)
{
    int i = 0;
    std::string special[5] = {"nan", "nanf", "inf", "+inf", "-inf"};

    while (str != special[i] && !special[i].empty())
        i++;
    if (i >= 0 && i < 5)
       return (true);
    return (false);
}

int    checker(std::string str)
{
    bool    point = false;

    if (str.empty())
        return (VOID);
    if (special_case(str))
        return (SPECIAL);
    if (str.length() == 1)
    {
        if (isdigit(str[0]))
            return (INT);
        else
            return (CHAR);
    }
    for (size_t j = 0; str.length() > j; j++)
    {
        if (str[0] == '+' || str[0] == '-')
            j++;
        if (!isdigit(str[j])) 
        {
            if (j + 1 == str.length() && str[j] == 'f')
                return (FLOAT);
            else if (str[j] == '.' && !point)
                point = true;
            else
                return (VOID);
        }
    }
    if (point)
        return (DOUBLE);
    return (INT);
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
    int i = checker(str);

    switch (i)
    {
        case 1:
            toChar(str);
            break;
        case 2:
            toInt(str);
            break;
        case 3:
            toDouble(str);
            break;
        case 4:
            toFloat(str);
            break;
        case 5:
            toSpecial(str);
            break;
        default:
            std::cout << "Error" << std::endl;
            break;
    }
}