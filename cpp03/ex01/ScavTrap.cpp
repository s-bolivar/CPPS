/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:10:47 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/04 13:03:53 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	damage_atack = 20;
	std::cout << name << " has been created (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	name = _name;
	hit_points = 100;
	energy_points = 50;
	damage_atack = 20;
	std::cout << name << " has been created (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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

ScavTrap::~ScavTrap()
{
	std::cout << name << " has been destroyed (ScavTrap)" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << name << " is now in Gate keeper mode" << std::endl;
}