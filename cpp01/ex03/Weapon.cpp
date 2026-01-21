/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:56:35 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/19 13:41:04 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
	std::cout << type << " has been created" << std::endl;
}

std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string _type)
{
	type = _type;
}

Weapon::~Weapon()
{
	std::cout << type << " has been destroyed" << std::endl;
}
