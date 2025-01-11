#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	ClapTrap clapito = ClapTrap("Clapito");
	ScavTrap scavito = ScavTrap("Scavito");
	FlagTrap flagito = FlagTrap("Flagito");

	std::cout << "\nOther classes working normally" << std::endl;
	flagito.attack(clapito.getName());
	clapito.takeDamage(30);
	clapito.beRepaired(10);
	scavito.attack("Flagito");
	flagito.takeDamage(20);

	std::cout << "\n====================\nNow creating hybrid:" << std::endl;
	DiamondTrap diamante = DiamondTrap("ElDiamante");
	diamante.attack(scavito.getName());
	diamante.beRepaired(20);
	diamante.whoAmI();

	std::cout <<"\n================\nDestroying objects: " << std::endl;
	return (0);
}
