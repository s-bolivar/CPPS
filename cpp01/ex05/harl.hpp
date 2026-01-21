#ifndef HARL_H
#define	HARL_H
#include <iostream>
#include <string>

class	harl
{
	private:
		std::string	level;
	public:
		harl(std::string);
		void	debug();
		void	info();
		void	warning();
		void	error();
		void	complain(std::string);
		~harl();
};
#endif