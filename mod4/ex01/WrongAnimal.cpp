#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "class WrongAnimal() created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "class WrongAnimal() created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "class WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->type = rhs.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "No specific sound for general class WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
};
