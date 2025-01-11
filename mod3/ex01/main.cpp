#include "ScavTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	ClapTrap clapito = ClapTrap("Clapito");
	ScavTrap scavito = ScavTrap("Scavito");

	clapito.attack("nothing");
	scavito.attack("nothing");
	//let's attack unless energy is 0;
	for (int i = 0; i < 49; i++) {
		scavito.attack("nothing");
	}
	std::cout << "\n+++++++++++++++++++\n Out of energy notification should be printed:" << std::endl;
	scavito.attack("nothing");
	scavito.guardGate();

	std::cout << "\n+++++++++++++++++++\nGuarding on new ScavTrap should be activated:" << std::endl;
	ScavTrap scavito2 = ScavTrap("Scavito the second");

	scavito2.guardGate();

	std::cout << "\n++++++++++++++++\nDestorying objects: \n" << std::endl;

}