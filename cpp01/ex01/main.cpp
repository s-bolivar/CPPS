/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:04:37 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/16 15:09:57 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "string"

int main()
{
	Zombie	*horde = zombieHorde(4, "Raul");
	for(int i = 0; i < 4; i++)
		horde[i].announce();
	delete[] horde;
}