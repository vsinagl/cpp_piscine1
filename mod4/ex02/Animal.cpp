#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "class Animal() created" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "class Animal() created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "class Animal destroyed" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->type = rhs.type;
    }
    return *this;
}


std::string Animal::getType() const
{
	return (this->type);
};
