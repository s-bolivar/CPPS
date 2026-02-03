#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int damage_atack;
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &);
		std::string getname();
		int	getdamage();
		int	gethit();
		ClapTrap &operator=(ClapTrap const &);
		void attack(const std::string&);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		~ClapTrap();
};

#endif