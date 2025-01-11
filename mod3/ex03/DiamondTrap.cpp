#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"), 
	FlagTrap(name),
	ScavTrap(name)
{
	this->name = name;
	this->hp = FlagTrap::hp;
	this->energy = ScavTrap::energy;
	this->att_damage = ScavTrap::att_damage;
	std::cout << " << DiamondTrap >> " << this->name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond trap: " << this->name << " destroyed" << std::endl;
}

void	DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << this->name 
        << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}
