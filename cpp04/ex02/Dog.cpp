/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:07:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/12 11:16:53 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << type << " has been created" << std::endl;
}

Dog::Dog(Dog const &other)
{
	*this = other;
	brain = new Brain(*other.brain);
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " has been destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
}

Brain *Dog::getBrain()
{
	return (brain);
}