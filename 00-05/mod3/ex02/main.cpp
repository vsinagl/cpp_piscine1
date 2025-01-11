#include "FlagTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	FlagTrap flagito = FlagTrap("Flagito");

	//let's attack unless energy again 50 times
	for (int i = 0; i < 50; i++) {
		flagito.attack("nothing");
	}
	std::cout << "\n+++++++++++++++++++\n - Becuase flagito has 100 energy unlike FlagTrap, it has enough energy to attack again" << std::endl;
	flagito.attack("nothing");
	std::cout << "\n++++++++++++++++\nFlagito special ability: \n" << std::endl;
	flagito.highFivesGuys();
	std::cout << "\n++++++++++++++++\nDestorying objects: \n" << std::endl;
	return 0;
}
