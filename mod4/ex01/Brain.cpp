#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain object construted" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destoryed" << std::endl;
}

Brain::Brain( const Brain& src )
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain& Brain::operator=( const Brain& rhs )
{
    std::cout << "Brain assignment operator called" << std::endl;
    if ( this != &rhs ) {
		for (int i = 0; i < 100; i++){
			this->ideas[i] = rhs.ideas[i];
		}
    }
    return *this;
}