/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/17 18:21:18 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucraft.hpp"


int main()
{
    try
    {
        Bureaucrat a("Ricardo", 1);
        Form form;
        a.signForm(form);
        std::cout << a;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

}