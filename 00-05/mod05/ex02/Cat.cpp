#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "creating class Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "destroying class Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Mheeew" << std::endl;
}

