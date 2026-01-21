/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:17:46 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/20 12:34:42 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
	std::cout << name << " has been created" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	std::cout << name << " recived " << _weapon->getType() << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void	HumanB::attack()
{
	 if (this->_weapon == NULL)
	 {
		std::cout << " puta la wea no tengo nada ahorita" << std::endl;
		return ;
	 }
	std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}