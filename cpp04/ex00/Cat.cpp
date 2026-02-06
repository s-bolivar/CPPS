/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:07:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/06 17:18:56 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << type << " has been created" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	*this = other;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << type << " has been destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}