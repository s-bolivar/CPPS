/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:10:47 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/04 13:31:23 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	damage_atack = 20;
	std::cout << name << " has been created (FragTrap)" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	name = _name;
	hit_points = 100;
	energy_points = 50;
	damage_atack = 20;
	std::cout << name << " has been created (FragTrap)" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

FragTrap::~FragTrap()
{
	std::cout << name << " has been destroyed (FragTrap)" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout <<"we did it :D" << std::endl;
}