#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &);
		WrongCat &operator=(WrongCat const &);
		~WrongCat();
		void makeSound() const;
};

#endif