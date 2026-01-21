/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:12:21 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/15 15:01:09 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	name = _name;
	std::cout<<"name created"<<std::endl;
}

void Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<name<<" has been detroyed"<<std::endl;
}