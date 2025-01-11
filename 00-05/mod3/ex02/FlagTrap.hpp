
#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FlagTrap: virtual public ClapTrap
{
	public:
		FlagTrap(std::string name);
		~FlagTrap();
		void highFivesGuys(void);
		void attack(const std::string &target);
};

#endif