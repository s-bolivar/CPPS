/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:39:35 by sbolivar          #+#    #+#             */
/*   Updated: 2025/10/17 10:46:20 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for(int j = 1; av[j]; j++)
	{
		std::string line = av[j];
		for(int i = 0; line[i]; i++)
			std::cout << static_cast<char>(toupper(line[i]));
		std::cout << " ";
	}
	std::cout << std::endl;
}
