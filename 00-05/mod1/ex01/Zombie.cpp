#include "Zombie.hpp"


Zombie::Zombie()
{
	this->name = "name";
}

Zombie::~Zombie()
{
	std::cout << this->name <<": is destroyed!" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie* newZombie( std::string name)
{
	Zombie *zombie;
	
	zombie = new Zombie(name);
	return (zombie);
}

Zombie *randomChump( std::string name)
{
	Zombie *zombie;
	
	zombie = newZombie(name);
	zombie->announce();
	return (zombie);
}


