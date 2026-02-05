#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &);
		WrongAnimal &operator=(WrongAnimal const &);
		virtual ~WrongAnimal();
		virtual void makeSound() const;
		const std::string &getType() const;
};

#endif