/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 21:52:20 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/17 23:55:18 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubberycreationform::Shrubberycreationform(): AForm::AForm("Shrubberycreationform", 145, 137), target("Home")
{
	std::cout << target << " has been created" << std::endl;
}

Shrubberycreationform::Shrubberycreationform(std::string _target): AForm::AForm("Shrubberycreationform", 145, 137), target(_target)
{
	std::cout << target << " has been created" << std::endl;
}

Shrubberycreationform::Shrubberycreationform(const Shrubberycreationform &other): AForm::AForm("Shrubberycreationform", 145, 137)
{
	*this = other;
}

Shrubberycreationform &Shrubberycreationform::operator=(const Shrubberycreationform &other)
{
	if (this != &other)
		target = other.target;
	return (*this);
}

Shrubberycreationform::~Shrubberycreationform()
{
	std::cout << target << " has been destroyed" << std::endl;
}

void    Shrubberycreationform::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= AForm::getExecute_it())
	{
		std::string fname = target;
		fname.append("_shrubbery.txt");
		std::ofstream file(fname.c_str());
		if (file.is_open())
		{
			std::cout << "file has been created" << std::endl;
			file << "   *\n  { }\n {   }\n{     }\n  | |";
			file.close();
		}
	}
	else
		throw AForm::GradeTooLowException();
}
