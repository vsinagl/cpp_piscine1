#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


// int main()
// {
// 	const Animal *animal1  = new Animal();
// 	const Animal animal2 = Animal();

// 	const Cat *cat1 = new Cat();
// 	const Cat cat2 = Cat();

// 	animal1->makeSound();
// 	animal2.makeSound();

// 	cat1->makeSound();
// 	cat2.makeSound();

// 	delete animal1;
// 	delete cat1;
// }

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;


    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}