/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:07:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/06 17:18:40 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "giraffe";
	std::cout << type << " has been created" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << type << " has been destroyed" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "this animal dont make noise" << std::endl;
}

const std::string &Animal::getType() const
{
	return (type);
}