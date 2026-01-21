#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class 	HumanA
{
	private:
		std::string	name;
		Weapon& _Weapon;
	public:
		HumanA(std::string, Weapon&);
		void	attack();
		~HumanA();
};

#endif