#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &);
		ScavTrap &operator=(ScavTrap const &);
		~ScavTrap();
		void guardGate();
};

#endif