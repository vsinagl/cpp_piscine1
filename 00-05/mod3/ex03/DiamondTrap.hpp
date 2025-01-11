#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : public FlagTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		void whoAmI();
		using ScavTrap::attack; //because both parents have same attack method,  we need to specify which we want to use
};

#endif