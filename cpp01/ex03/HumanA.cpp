/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:33:01 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/19 13:52:15 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _Weapon): _Weapon(_Weapon)
{
	name = _name;
	std::cout << name << " has been created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}