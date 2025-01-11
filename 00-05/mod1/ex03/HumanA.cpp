
#include "HumanA.hpp"

/*
wee need to assing reference using inicialization list
References must be initialized when they are created, 
and the initialization list is the way to do this in C++.
*/
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

