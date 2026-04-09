/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:12:14 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/09 13:46:42 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
    grade--;
	if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}
void    Bureaucrat::DecrementGrade()
{
    grade++;
	if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &bureaucraft)
{
    o << "Bureaucraft: " << bureaucraft.getName() << std::endl;
    o << "Grade: " << bureaucraft.getGrade() << std::endl;
	return o;
}