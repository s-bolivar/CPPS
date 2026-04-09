/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/09 14:12:24 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    std::cout << "=== Test 1: Creating a Bureaucrat and a Form ===" << std::endl;
    Bureaucrat alice("Alice", 42);
    Form taxForm("Tax Form", 50, 20);

    std::cout << alice << std::endl;
    std::cout << taxForm << std::endl;

    std::cout << "\n=== Test 2: Bureaucrat signs a form successfully ===" << std::endl;
    alice.signForm(taxForm);
    std::cout << taxForm << std::endl;

    std::cout << "\n=== Test 3: Bureaucrat with too low grade tries to sign ===" << std::endl;
    Bureaucrat bob("Bob", 100);
    Form topSecret("Top Secret Form", 10, 5);

    std::cout << bob << std::endl;
    std::cout << topSecret << std::endl;

    bob.signForm(topSecret);
    std::cout << topSecret << std::endl;

    std::cout << "\n=== Test 4: Form creation with invalid grade ===" << std::endl;
    try
    {
        Form invalidForm("Invalid", 0, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Increment/Decrement Bureaucrat grade ===" << std::endl;
    try
    {
        Bureaucrat charlie("Charlie", 2);
        std::cout << charlie << std::endl;
        charlie.IncrementGrade();
        std::cout << "After increment: " << charlie << std::endl;
        charlie.IncrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}