#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main()
// {
// 	Weapon club = Weapon("crude spiked club");
// 	Weapon sword = Weapon("long sword");
// 	std::cout << club.getType() << std::endl;
// 	club.setType("wooden club");
// 	std::cout << club.getType() << std::endl;

// 	HumanA Alfredo = HumanA("HumanA", club);
// 	HumanB Bonifaco = HumanB("HumanB");
// 	Alfredo.attack();
// 	Bonifaco.attack();
// 	std::cout << "we give a weapon to this sucker" << std::endl;
// 	Bonifaco.setWeapon(sword);
// 	Bonifaco.attack();
// }

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}