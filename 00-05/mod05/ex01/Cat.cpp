#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "creating class Cat" << std::endl;
	try{
		this->brain = new Brain();
	}
	catch (const std::exception &e) {
		std::cout << "Brain error: " << e.what() << std::endl;
	}
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "destroying class Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Mheeew" << std::endl;
}

//dog assignement operator overdiding becuase of brain
Cat& Cat::operator=(const Cat& src)
{
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}