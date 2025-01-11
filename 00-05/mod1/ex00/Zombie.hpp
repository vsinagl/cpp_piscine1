#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		// void	setName();

	private:
		std::string name;
};

Zombie	*newZombie( std::string name);
Zombie	*randomChump( std::string name);

#endif