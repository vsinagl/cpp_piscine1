#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "creating class WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "destroying class WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Mheeew" << std::endl;
}

