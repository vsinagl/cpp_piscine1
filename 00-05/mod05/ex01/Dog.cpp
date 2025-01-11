#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog class created" << std::endl;
	try{
		this->brain = new Brain();
	}
	catch (const std::exception &e) {
		std::cout << "Brain error: " << e.what() << std::endl;
	}
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haf Haf" << std::endl;
}

//dog assignement operator overdiding becuase of brain
Dog& Dog::operator=(const Dog& src )
{
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}