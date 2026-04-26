/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 15:01:22 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/26 22:02:54 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : error(0), line("")
{
    std::ifstream fdata("data.csv");
    std::string date;
    std::string value;
    while (!fdata.eof())
    {
        std::getline(fdata, date, ',');
        std::getline(fdata, value, '\n');
        data[date] = atof(value.c_str());
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        error = other.error;
        line = other.line;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

std::string BitcoinExchange::getLine() const
{
    return (line);
}

void    BitcoinExchange::readFileToLine(std::istream &input)
{
    std::getline(input, line, '\n');
}

int     BitcoinExchange::getError() const
{
    return (error);
}

void    BitcoinExchange::print_error()
{
    switch (error)
    {
        case 1:
            std::cout << "Error: incorrect input => "<< line << std::endl;
            error = 0;
            break ;
        case 2:
            std::cout << "Error: negative number" << std::endl;
            error = 0;
            break ;
        case 3:
            std::cout << "Error: too large a number" << std::endl;
            error = 0;
            break ;
        default:
            std::cout << "Error: incorrect date" << std::endl;
            error = 0;
            break ;
    }
}

float   BitcoinExchange::exchange()
{
    return (it->second * value);
}

void    BitcoinExchange::parser()
{
    if (line.size() < 13)
    {
        error = BAD_INPUT;
        return ;
    }
    std::string date = line.substr(0, 10);
    if (date_parser(date))
    {
        error = BAD_DATE;
        return ;
    }
    std::string format = line.substr(10, 3);
    if (format != " | ")
    {
        error = BAD_INPUT;
        return ;
    }
    std::string svalue = line.substr(13);
    value = atof(svalue.c_str());
    if (value > 1000)
    {
        error = LARGE;
        return ;
    }
    if (value < 0)
    {
        error = NEGATIVE;
        return ;
    }
    it = data.find(date);
    if (it == data.end())
    {
        it = data.lower_bound(date);
        it--;
    }
}

int date_parser(std::string date)
{
    int i = 0;
    std::string y = date.substr(0, 4);
    std::string m = date.substr(5, 2);
    std::string d = date.substr(8);
    while (i < 4)
    {
        if (!isdigit(y[i]))
            return (1);
        i++;
    }
    i = 0;
    while (i < 2)
    {
        if (!isdigit(m[i]) || !isdigit(d[i]))
            return (1);
        i++;
    }
    if (atoi(y.c_str()) < 2009 || atoi(y.c_str()) > 2022)
        return (1);
    if (atoi(m.c_str()) < 0 || atoi(m.c_str()) > 12)
        return (1);
    if (atoi(d.c_str()) < 0 || atoi(d.c_str()) > 31)
        return (1);
    return (0);
}