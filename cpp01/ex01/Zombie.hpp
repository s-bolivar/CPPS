#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		void 	announce();
		void	setname(std::string);
		~Zombie();
};
Zombie* zombieHorde(int N, std::string name );
