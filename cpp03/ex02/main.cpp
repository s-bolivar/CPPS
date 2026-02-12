/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:45:23 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/12 11:01:08 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap Fragtrap1 = FragTrap();
	FragTrap Fragtrap2(Fragtrap1);
	ScavTrap scav = ScavTrap();

	scav.attack("Manuel");
	Fragtrap2.attack("Raul");
	Fragtrap2.takeDamage(100);
	Fragtrap2.takeDamage(1);
	Fragtrap2.beRepaired(2);
	Fragtrap2.beRepaired(2);
	Fragtrap2.attack("Raul");
	Fragtrap2.highFivesGuys();
}
