
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

/*
When we create child class, we need to override the constructor and destruct. 
Because if we don't do it, the dafult ClapTrap constructor will be used instead --> we will create ClapTrap instead of ScavTrap

There are three ways how class can inherit in cpp:
publicly: 
	- public members of Parent remain public in Child
	- protected members of Parent remain protected in Child
	- private members of Parent remain inaccessible in Child

protected:
	- public members of Parent become protected in Child
	- private members of Parent remain inaccessible in Child
	- protected members of Parent become protected in Child

or private:
	- public members of Parent become private in Child
	- protected members of Parent become private in Child
	- private members of Parent remain inaccessible in Child
PRIVATE MEMBERS ARE ALWAYS INACCESIBLE
*/

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		//we need to overide the attack function, we want to se a little different behavior
		void attack(const std::string &target);
		void guardGate();

};

#endif