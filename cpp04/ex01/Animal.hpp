#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &);
		Animal &operator=(Animal const &);
		virtual ~Animal();
		virtual void makeSound() const;
};

#endif