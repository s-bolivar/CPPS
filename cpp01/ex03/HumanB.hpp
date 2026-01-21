#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class 	HumanB
{
	private:
		std::string	name;
		Weapon* _weapon;
	public:
		HumanB(std::string);
		void	attack();
		void	setWeapon(Weapon&);
		~HumanB();
};

#endif