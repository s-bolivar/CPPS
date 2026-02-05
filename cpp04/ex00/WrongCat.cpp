/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:47:13 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/05 22:53:31 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << type << "has been created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << type << "has been destroyed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}