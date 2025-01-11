
#include "Zombie.hpp"	


// int main()
// {
// 	Zombie *zombie1 = newZombie("Timmy");
// 	Zombie *zombie2 = randomChump("Igor");

// 	zombie1->announce();
// 	free(zombie1);
// 	free(zombie2);
// }

int main()
{
 	Zombie *igor = randomChump("Igor");
	Zombie zombie = Zombie("Zombie1");
	zombie.announce();
	Zombie zombie2 = Zombie("Zombie2");
	zombie2.announce();
	Zombie zombie3 = Zombie("Zombie3");
	zombie3.announce();
	delete igor;
}