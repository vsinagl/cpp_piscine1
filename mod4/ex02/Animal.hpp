#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

/*
C++ virtual functions:
 When you have a pointer to a base class (Animal*) that points to a derived class object
(Dog or Cat ==> childrens of animals), you need virtual destructors to ensure
the proper derived class destructor is called.
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
		virtual void makeSound() const = 0;
	
	protected:
		std::string type;
};

#endif