/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:19:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/14 21:02:07 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucraft.hpp"

int main()
{
    try
    {
        Bureaucrat a("Manolo", 151);
        std::cout << a;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

}