/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:20:10 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/16 13:10:08 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].setname(name);
	return (zombies);
}
