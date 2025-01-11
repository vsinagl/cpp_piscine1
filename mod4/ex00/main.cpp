#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

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
Under the hood, C++ achieves this through a mechanism called the virtual table (vtable).
When you declare a function as virtual, the compiler creates a table of
function pointers for each class.
When a virtual function is called, C++ looks up the correct function in this
table based on the actual object type.

sometimes, we also distinguish:
Compile-time Polymorphism (Function Overloading):
	and
Runtime Polymorphism (Function Overriding):
*/

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wrongCat->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrongCat;
	return 0;
}