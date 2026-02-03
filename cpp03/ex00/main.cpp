/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:45:23 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/03 16:30:44 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap1 = ClapTrap("Manuel");
	ClapTrap claptrap2(claptrap1);

	claptrap2.attack("Raul");
	claptrap2.takeDamage(9);
	claptrap2.takeDamage(1);
	claptrap2.attack("Raul");
}
