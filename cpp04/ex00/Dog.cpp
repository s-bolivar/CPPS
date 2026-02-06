/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:07:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/06 17:19:00 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << type << " has been created" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	*this = other;
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << type << " has been destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}