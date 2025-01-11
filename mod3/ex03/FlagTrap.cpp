
#include "FlagTrap.hpp"
#include <iostream>
#include <string>

/*
Constructor implementation
	- we initialize the base class obj (ClapTrap) with name and then change
the atributes values !
*/
FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 100;
	this->att_damage = 30;
	std::cout << "|| FlagTrap || " << this->name << " created!" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "|| FlagTrap || " << this->name << " was destroyed!" << std::endl;
}

void	FlagTrap::attack(const std::string &target)
{
	if (target.empty())
		return ;
	if (this->hp <= 0)
	{
		return ;
	}
	if (this->energy - 1 < 0)
	{
		std::cout << "FlagTrap " << this->name << " is out of energy!" << std::endl;
		return ;
	}
	this->energy = this->energy - 1;
	std::cout << "FlagTrap " << this->name << " attacks: " << target << ", causing "
		<< this->att_damage << " points of damage!" << std::endl;
}

void	FlagTrap::highFivesGuys()
{
	std::cout << " Gimme That High Five" << std::endl;
	std::cout << " High Five recieved" << std::endl;
}
