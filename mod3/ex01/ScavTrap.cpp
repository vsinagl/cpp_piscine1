
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

/*
Constructor implementation
	- we initialize the base class obj (ClapTrap) with name and then change
the atributes values !
*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 50;
	this->att_damage = 20;
	std::cout << "!!Scav Trap!! " << this->name << " overwrite attributes!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav trap: " << this->name << " was destroyed!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (target.empty())
		return ;
	if (this->hp <= 0)
	{
		return ;
	}
	if (this->energy - 1 < 0)
	{
		std::cout << "Scav Trap " << this->name << " is out of energy!" << std::endl;
		return ;
	}
	this->energy = this->energy - 1;
	std::cout << "Scav Trap " << this->name << " attacks: " << target << ", causing "
		<< this->att_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->hp <= 0 || this->energy <= 0)
		return ;
	this->energy = this->energy - 1;
	std::cout << "ScavTrap: " << this->name << " is guarding the gate !" << std::endl;
}
