#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		virtual void makeSound() const = 0;
};

#endif