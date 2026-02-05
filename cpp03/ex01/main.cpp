/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:45:23 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/04 13:04:14 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap1 = ScavTrap();
	ScavTrap scavtrap2(scavtrap1);

	scavtrap2.attack("Raul");
	scavtrap2.takeDamage(9);
	scavtrap2.takeDamage(1);
	scavtrap2.beRepaired(2);
	scavtrap2.beRepaired(2);
	scavtrap2.attack("Raul");
	scavtrap2.guardGate();
}
