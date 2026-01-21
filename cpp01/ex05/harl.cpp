/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:11:00 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/21 16:06:59 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl(std::string _level)
{
	level = _level;
	std::cout << "level has been created" << std::endl;
}

void	harl::complain(std::string level)
{
	std::string	levels[4] = {"warning", "error", "debug", "info"};
	
	void(harl::*functions[4])() = {
		&harl::warning,
		&harl::error,
		&harl::debug,
		&harl::info
	};
	for (int i = 0; i < 4; i++)
	{
        if (level == levels[i]) 
		{
            (this->*functions[i])(); 
            return;
        }
    }
}

harl::~harl()
{
	std::cout << "level has been destroyed" << std::endl;
}

void	harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}
void	harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}