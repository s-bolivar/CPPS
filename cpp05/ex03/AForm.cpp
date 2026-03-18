/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:47:55 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/17 17:42:01 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Captain"), sign_it(0), execute_it(0)
{
    std::cout << "AForm " << name << " with the ranged required to sign in: ";
    std::cout << sign_it << " and to execute: " << execute_it << ", has been created" << std::endl;
}

AForm::AForm(std::string _name, int _sign_it, int _execute_it) : name(_name), sign_it(_sign_it), execute_it(_execute_it), comp(false)
{
    std::cout << "AForm " << name << " with the ranged required to sign in: ";
    std::cout << sign_it << " and to execute: " << execute_it << ", has been created" << std::endl;
}

AForm &AForm::operator=(AForm const &other)
{
    if (this != &other)
        return (*this);
    return (*this);
}

AForm::AForm(AForm const &other) : name(other.getName()), sign_it(other.getSign_it()), execute_it(other.getExecute_it()), comp(false)
{
    *this = other;
}

AForm::~AForm()
{
    std::cout << "AForm " << name << " with the ranged required to sign in: ";
    std::cout << sign_it << " and to execute: " << execute_it << ", has been destroyed" << std::endl;
}

std::string AForm::getName() const
{
    return (name);
}

int	AForm::getSign_it() const
{
    return (sign_it);
}

int	AForm::getExecute_it() const
{
    return (execute_it);
}

void		AForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() >= sign_it)
        throw GradeTooLowException();
    else
    {
        comp = true;
        std::cout << other.getName() << " signed " << name << std::endl;
    }
}

std::ostream&	operator<<(std::ostream &o, AForm const &AForm)
{
    o << "AForm: " << AForm.getName() << std::endl;
    o << "Grade sign required: " << AForm.getSign_it() << std::endl;
    o << "Grade execute required: " << AForm.getExecute_it() << std::endl;
	return o;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

