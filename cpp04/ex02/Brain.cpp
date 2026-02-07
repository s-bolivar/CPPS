/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:53:21 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/06 17:15:41 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain has been created" << std::endl;
}

Brain::Brain(Brain const &other)
{
    *this = other;
}

Brain &Brain::operator=(Brain const &other)
{
    if (this != &other)
    {
        for (int i; i < 100; i++)
            Ideas[i] = other.Ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain has been detroyed" << std::endl;
}

std::string Brain::getIdea(int index)
{
    if (index < 100 && index > 0)
    {
        return (Ideas[index]);
    }
    return "";
}

void Brain::setIdea(int index, std::string idea)
{
    if (index < 100 && index > 0)
    {
        Ideas[index] = idea;
    }
}