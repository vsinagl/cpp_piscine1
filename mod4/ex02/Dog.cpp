#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog class created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haf Haf" << std::endl;
}