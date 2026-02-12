#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		FragTrap &operator=(FragTrap const &);
		~FragTrap();
		void highFivesGuys();
};

#endif