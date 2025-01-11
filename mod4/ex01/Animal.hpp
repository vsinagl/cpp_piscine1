#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>


/*
C++ virtual functions:
 When you have a pointer to a base class (Animal*) that points to a derived class object
(Dog or Cat ==> childrens of animals), you need virtual destructors to ensure
the proper derived class destructor is called.

Polymorphism:
	polymorphism --> many forms. It alows  objects of different classes
to be treated as objects of a common base class.
	this is magical in some ways, look at this example:

void makeAnimalSpeak(const Animal* animal) {
	animal->makeSound()
}

--> we got a pointer to base class (coz we don't know which specific animal we will 
be handling) and we got a coresponding sound based on specific animal
*/

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
    	Animal( const Animal& src );
    	Animal& operator=( const Animal& rhs );

		std::string getType() const;
		virtual void makeSound() const;
	
	protected:
		std::string type;
};

#endif