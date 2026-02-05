/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:05:28 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/05 22:54:49 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    const WrongAnimal *wronganimal = new WrongAnimal();
    const WrongAnimal *wrongcat = new WrongCat();
    std::cout << wronganimal->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    wronganimal->makeSound();
    wrongcat->makeSound();
    delete meta;
    delete i;
    delete j;
    delete wronganimal;
    delete wrongcat;
    return 0;
}