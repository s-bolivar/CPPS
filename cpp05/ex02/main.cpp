/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/17 23:53:09 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucraft.hpp"
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
        Bureaucrat c("Brenda", 70);
        Shrubberycreationform s("Home");
        c.signAForm(s);
        c.executeAForm(s); 
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

}