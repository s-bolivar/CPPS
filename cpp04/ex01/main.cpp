/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:05:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/06 17:21:36 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Dog dog1 = Dog();
    dog1.getBrain()->setIdea(1, "me he cagao en la alfombra");
    std::cout << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << dog1.getBrain()->getIdea(1) << std::endl;
    Cat cat1 = Cat();
    cat1.getBrain()->setIdea(1, "soy mas inutil que pedro sanchez");
    std::cout << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << cat1.getBrain()->getIdea(1) << std::endl;
    return 0;
}