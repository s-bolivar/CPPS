/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:44:34 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/18 17:40:57 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern &other)
{
	(void) other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void) other;
	return (*this);
}

Intern::~Intern()
{
	
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	int i = 0;

    std::string str[3] = {"shrubery creation", "robotomy request", "presidential pardon"};
	while (str[i] != form && !str[i].empty())
		i++;
	switch (i)
	{
		case 0:
			return (new Shrubberycreationform(target));
		case 1:
			return (new Robotomyrequestform(target));
		case 2:
			return (new Presidentialpardonform(target));
		default:
			throw NoExistingForm();
	}
}

const char *Intern::NoExistingForm::what() const throw()
{
	return ("No existing form");
}