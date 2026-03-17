/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 21:52:22 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/17 23:50:08 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomyrequestform::Robotomyrequestform(): AForm::AForm("Robotomyrequestform", 72, 45), target("Milagros")
{
	std::cout << target << " has been created" << std::endl;
}

Robotomyrequestform::Robotomyrequestform(std::string _target): AForm::AForm("Robotomyrequestform", 72, 45), target(_target)
{
	std::cout << target << " has been created" << std::endl;
}

Robotomyrequestform::Robotomyrequestform(const Robotomyrequestform &other): AForm::AForm("Robotomyrequestform", 72, 45)
{
	*this = other;
}

Robotomyrequestform &Robotomyrequestform::operator=(const Robotomyrequestform &other)
{
	if (this != &other)
		target = other.target;
	return (*this);
}

Robotomyrequestform::~Robotomyrequestform()
{
	std::cout << target << " has been destroyed" << std::endl;
}

void    Robotomyrequestform::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= AForm::getExecute_it())
    {
        if (time(NULL) % 2 == 0)
            std::cout << target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "the robotomy failed." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}
