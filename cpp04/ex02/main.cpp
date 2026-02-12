/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:05:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/12 11:24:43 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Dog dog1 = Dog();
    dog1.getBrain()->setIdea(1, "holly molly");
    std::cout << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << dog1.getBrain()->getIdea(1) << std::endl;
    Cat cat1 = Cat();
    cat1.getBrain()->setIdea(1, "holly cow");
    std::cout << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << cat1.getBrain()->getIdea(1) << std::endl;
    dog1.makeSound();
    cat1.makeSound();
    return 0;
}