#include "ClapTrap.hpp"
#include <iostream>
 

 int main(void)
 {
	ClapTrap clapito1 = ClapTrap("clapito1");
	ClapTrap clapito2 = ClapTrap("clapito2");
	ClapTrap clapito3 = ClapTrap("clapito3");

	clapito1.attack(clapito3.getName());
	clapito3.takeDamage(5);

	clapito1.attack(clapito3.getName());
	clapito3.takeDamage(5);
	std::cout << "\nclapito3 should be dead --> nothing should be printed now\n" << std::endl;
	clapito3.takeDamage(5);
	clapito3.beRepaired(5);
	clapito3.attack(clapito1.getName());
	clapito3.beRepaired(5);
	std::cout << "was rpinted something ?\n" << std::endl;
	std::cout << "\nclapito2 starts  attacking clapito1 3 times" << std::endl;
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);

	std::cout << "clapito2 should be fully healed now !" << std::endl;
	clapito2.beRepaired(5);
	std::cout << "lets damage clapito2 a little bit\n" << std::endl;
	clapito2.takeDamage(9);
	clapito2.beRepaired(5);
	clapito2.beRepaired(5);
	std::cout << "clapito 2 should be fully healed:" << std::endl;
	//you can try to kill clapito2 here by causing 10 damage. 
	// clapito2.takeDamage(10);


	//now, lets test the energy system, clapit1 spend already 3 energy points (should have 7)
	//clapito2 spend 3 energy points on attacking and 2 on healing (he try to heal 3times but on last try he was already fully headled)
	//lets see if clapito2 have enought energy to destory clapito1
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	//clapito2 should be out of energy now
	std::cout << "\n Clapito2 should have 0 energy by now\n" << std::endl;
	clapito2.attack(clapito1.getName());
	clapito1.takeDamage(1);
	return 0;
 }