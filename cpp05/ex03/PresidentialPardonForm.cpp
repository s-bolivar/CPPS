/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 21:52:24 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/18 16:56:33 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

Presidentialpardonform::Presidentialpardonform(): AForm::AForm("Presidentialpardonform", 25, 5), target("Freddy")
{
	std::cout << target << " has been created" << std::endl;
}

Presidentialpardonform::Presidentialpardonform(std::string _target): AForm::AForm("Presidentialpardonform", 25, 5), target(_target)
{
	std::cout << target << " has been created" << std::endl;
}

Presidentialpardonform::Presidentialpardonform(const Presidentialpardonform &other): AForm::AForm("Presidentialpardonform", 25, 5)
{
	*this = other;
}

Presidentialpardonform &Presidentialpardonform::operator=(const Presidentialpardonform &other)
{
	if (this != &other)
		target = other.target;
	return (*this);
}

Presidentialpardonform::~Presidentialpardonform()
{
	std::cout << target << " has been destroyed" << std::endl;
}

void    Presidentialpardonform::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= AForm::getExecute_it())
        std::cout << target <<  " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
        throw AForm::GradeTooLowException();
}
