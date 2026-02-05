/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:47:16 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/05 22:48:56 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "giraffe";
	std::cout << type << "has been created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << "has been destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "this animal dont make noise" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (type);
}