/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:44:01 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/22 12:30:44 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(5)
{
    cont.reserve(N);
    it = 0;
}

Span::Span(int _N) : N(_N)
{
    cont.reserve(N);
    it = 0;
}

Span::Span(const Span &other)
{
    *this = other;
}

Span    &Span::operator=(const Span &other)
{
    if (this != &other)
        N = other.N;
    return (*this);
}

Span::~Span() {}

void    Span::addNumber(int n)
{
    if (it < N)
    {
        cont.push_back(n);
        it++;
    }
    else
        throw OverflowException();
}

int     Span::shortestSpan()
{
    int res = abs(cont[0] - cont[1]);
    for (unsigned int i = 0; i < cont.size(); i++)
    {
        unsigned int j = i + 1;
        while (j < cont.size())
        {
            if (res > abs(cont[i] - cont[j]))
                res = abs(cont[i] - cont[j]);
            j++;
        }
    }
    return (res);
}

int     Span::longestSpan()
{
    int res = abs(cont[0] - cont[1]);
    for (unsigned int i = 0; i < cont.size(); i++)
    {
        unsigned int j = i + 1;
        while (j < cont.size())
        {
            if (res < abs(cont[i] - cont[j]))
                res = abs(cont[i] - cont[j]);
            j++;
        }
    }
    return (res);
}


void    Span::addRange(int range)
{
    srand(time(NULL));
    for (; range > 0; range--)
    {
        addNumber(rand());
    }
}