#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string);
		void announce();
		~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
