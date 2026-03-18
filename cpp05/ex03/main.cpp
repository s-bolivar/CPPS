/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/18 17:47:07 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucraft.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    try
    {
        Bureaucrat a("Santi", 100);
        Presidentialpardonform p("Noam");
        rrf->execute(a);
        p.execute(a);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    delete rrf;
}