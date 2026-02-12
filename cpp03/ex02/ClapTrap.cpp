/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:45:32 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/12 10:50:42 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Noam";
	hit_points = 10;
	energy_points = 10;
	damage_atack = 0;
	std::cout << name << " has been created (ClapTrap)" << std::endl;
}

int	ClapTrap::gethit()
{
	return (hit_points);
}

std::string	ClapTrap::getname()
{
	return (name);
}

int	ClapTrap::getdamage()
{
	return (damage_atack);
}

ClapTrap::ClapTrap(std::string _name)
{
	name = _name;
	hit_points = 10;
	energy_points = 10;
	damage_atack = 0;
	std::cout << name << " has been created (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		damage_atack = other.damage_atack;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " has been destroyed (ClapTrap)" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points == 0)
	{
		std::cout << name << " have 0 hit points :(" << std::endl;
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << name << " have 0 energy points :(" << std::endl;
		return ;
	}
	else
	{
		if (energy_points > 0)
			energy_points--;
		std::cout << getname() << " atacks " << target  << ", causing " << getdamage() << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	for (int i = amount; hit_points > 0 && i > 0; i--)
		hit_points--;
	std::cout << getname() << " recived " << amount << " damage points" << std::endl;
	std::cout << getname() << " have " << hit_points << " hit points now" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << name << " have 0 hit points :(" << std::endl;
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << name << " have 0 energy points :(" << std::endl;
		return ;
	}
	if (energy_points > 0)
		energy_points--;
	hit_points += amount;
	std::cout << getname() << " was repaired with " << amount << " hit points" << std::endl;
	std::cout << name << " have " << energy_points << " energy points now" << std::endl;
}