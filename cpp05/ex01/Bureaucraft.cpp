/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucraft.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:38 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/18 17:44:15 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucraft.hpp"

Bureaucrat::Bureaucrat() : name("Ricardo"), grade(1)
{
    std::cout << name << " whith the grade " << grade << " was created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
    std::cout << name << " whith the grade " << grade << " was created" << std::endl;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    if (this != &other)
        grade = other.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.getName())
{
    *this = other;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << name << " whith the grade " << grade << " was destroyed" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

void    Bureaucrat::IncrementGrade()
{
    grade++;
}
void    Bureaucrat::DecrementGrade()
{
    grade--;
}

void    Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << name << " couldn't sign "
                  << form.getName()
                  << " because "
                  << e.what()
                  << std::endl;
    }
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &bureaucraft)
{
    o << "Bureaucraft: " << bureaucraft.getName() << std::endl;
    o << "Grade: " << bureaucraft.getGrade() << std::endl;
	return o;
}