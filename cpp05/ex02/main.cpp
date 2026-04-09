/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/09 14:22:00 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("Ricardo", 5);
        Presidentialpardonform p("Noam");
        a.signAForm(p);
        a.executeAForm(p);
        std::cout << "---------------------------------------------------------------------------" << std::endl;
        Bureaucrat b("Manuel", 70);
        Robotomyrequestform r("Raúl");
        b.signAForm(r);
        b.executeAForm(r); 
        std::cout << "---------------------------------------------------------------------------" << std::endl;
        Bureaucrat c("Brenda", 15);
        Shrubberycreationform s("Home");
        c.signAForm(s);
        c.executeAForm(s); 
        std::cout << "---------------------------------------------------------------------------" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

}