/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:26:00 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/24 22:33:05 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
	std::cout << "\033[33m" << std::endl << "Empty Array" << "\033[0m" << std::endl;
	Array<int> emptyArray;
	std::cout << "emptyArray size: " << emptyArray.size() << std::endl;
	
	
	std::cout << "\033[33m" << std::endl << "Out of Bounce" << "\033[0m" << std::endl;
	try {
		std::cout << "emptyArray[5]: " << emptyArray[5] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[33m" << std::endl << "Int Array" << "\033[0m" << std::endl;
	Array<int> intArray(5);
	int i = 0;
	while (i < 5) {
		intArray[i] = i;
		i++;
	}
	std::cout << "intArray size: " << intArray.size() << std::endl;
	std::cout << "intArray: ";
	i = 0;
	while (i < 5) {
		std::cout << intArray[i] << " ";
		i++;
	}
	std::cout << std::endl;


	std::cout << "\033[33m" << std::endl << "Double Array" << "\033[0m" << std::endl;
	Array<double> doubleArray(10);
	i = 0;
    while (i < 10) {
		doubleArray[i] = i / 2.0;
		i++;
	}
	std::cout << "doubleArray size: " << doubleArray.size() << std::endl;
	std::cout << "doubleArray: ";
	i = 0;
	while (i < 10) {
		std::cout << doubleArray[i] << " ";
		i++;
	}
	std::cout << std::endl;


	std::cout << "\033[33m" << std::endl << "Copy Constructor unsing int array" << "\033[0m" << std::endl;
    Array<int> intArrayCopy(intArray);
    std::cout << "intArrayCopy size: " << intArrayCopy.size() << std::endl;
    std::cout << "intArrayCopy: ";
    i = 0;
    while (i < 5) {
        std::cout << intArrayCopy[i] << " ";
        i++;
    }
    std::cout << std::endl;


    std::cout << "\033[33m" << std::endl << "Assignment Operator unsing double array" << "\033[0m" << std::endl;
    Array<double> doubleArrayAssignment = doubleArray;
    std::cout << "doubleArrayAssignment size: " << doubleArrayAssignment.size() << std::endl;
    std::cout << "doubleArrayAssignment: ";
    i = 0;
    while (i < 10) {
        std::cout << doubleArrayAssignment[i] << " ";
        i++;
    }
    std::cout << std::endl;


    std::cout << "\033[33m" << std::endl << "Const Instance" << "\033[0m" << std::endl;
	const Array<int> constIntArray(intArray);
	std::cout << "constIntArray size: " << constIntArray.size() << std::endl;
	std::cout << "constIntArray: ";
	i = 0;
	while (i < 5) {
		std::cout << constIntArray[i] << " ";
		i++;
	}
	std::cout << std::endl;

	return (0);
}