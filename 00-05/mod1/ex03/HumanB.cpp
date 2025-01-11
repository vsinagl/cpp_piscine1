
#include "HumanB.hpp"

/*
wee need to assing reference using inicialization list
References must be initialized when they are created, 
and the initialization list is the way to do this in C++.
*/
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->_weapon == NULL) {
		std::cout << this->_name << " has no weapon" << std::endl;
	}
	else {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;

}

