/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:56:03 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/19 18:31:33 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club = Weapon("sword");
HumanA bob("Bob", club);
bob.attack();
club.setType("axe");
bob.attack();
}
{
Weapon club = Weapon("bow");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("gun");
jim.attack();
}
return 0;
}