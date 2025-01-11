
#include "Zombie.hpp"	


int main()
{
	Zombie *horde = zombieHorde(5, "Zombie from horde");
	annouceHorde(horde, 5);
	delete [] horde;
}