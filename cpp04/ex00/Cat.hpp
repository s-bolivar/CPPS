#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat();
		void makeSound() const;
};

#endif