/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/09 13:53:14 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== TEST 1 ===" << std::endl;
    try
    {
        Bureaucrat a("Alice", 42);
        std::cout << a;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 2 ===" << std::endl;
    try
    {
        Bureaucrat b("Bob", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 3 ===" << std::endl;
    try
    {
        Bureaucrat c("Charlie", 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 4 ===" << std::endl;
    try
    {
        Bureaucrat d("David", 2);
        std::cout << d;
        d.IncrementGrade();
        std::cout << "after increment:" << std::endl;
        std::cout << d;
        d.IncrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 5 ===" << std::endl;
    try
    {
        Bureaucrat e("Eve", 149);
        std::cout << e;
        e.DecrementGrade();
        std::cout << "after decrement:" << std::endl;
        std::cout << e;
        e.DecrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 6 ===" << std::endl;
    try
    {
        Bureaucrat f("Frank", 10);
        Bureaucrat g(f);
        std::cout << g;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 7 ===" << std::endl;
    try
    {
        Bureaucrat h("Hugo", 50);
        Bureaucrat i("Ivan", 100);
        std::cout << "before asign:" << std::endl;
        std::cout << h;
        std::cout << i;

        i = h;

        std::cout << "before asign:" << std::endl;
        std::cout << i;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}