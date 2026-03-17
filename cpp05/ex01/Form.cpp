/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:47:55 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/17 18:20:45 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Captain"), sign_it(5), execute_it(3), comp(false)
{
    std::cout << "Form " << name << " with the ranged required to sign in: ";
    std::cout << sign_it << " and to execute: " << execute_it << ", has been created" << std::endl;
}

Form::Form(std::string _name, int _sign_it, int _execute_it) : name(_name), sign_it(_sign_it), execute_it(_execute_it), comp(false)
{
    std::cout << "Form " << name << " with the ranged required to sign in: ";
    std::cout << sign_it << " and to execute: " << execute_it << ", has been created" << std::endl;
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
        return (*this);
    return (*this);
}

Form::Form(Form const &other) : name(other.getName()), sign_it(other.getSign_it()), execute_it(other.getExecute_it()), comp(false)
{
    *this = other;
}

Form::~Form()
{
    std::cout << "Form " << name << " with the ranged required to sign in: ";
    std::cout << sign_it << " and to execute: " << execute_it << ", has been destroyed" << std::endl;
}

std::string Form::getName() const
{
    return (name);
}

int	Form::getSign_it() const
{
    return (sign_it);
}

int	Form::getExecute_it() const
{
    return (execute_it);
}

void    Form::beSigned(Bureaucrat &other)
{
    if (other.getGrade() >= sign_it)
        throw GradeTooLowException();
    else
        comp = true;
}

std::ostream&	operator<<(std::ostream &o, Form const &form)
{
    o << "Form: " << form.getName() << std::endl;
    o << "Grade sign required: " << form.getSign_it() << std::endl;
    o << "Grade execute required: " << form.getExecute_it() << std::endl;
	return o;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}