# Purpose of subject
- the subject want to define an abstract class.
Abstract class is a blueprint. In this case, it tells us that Animal as a standalone object doesn't exists. We use only it's 
childs--> dogs and cats.
- abstract class is a class that has at least one pure virtual function. A pure virtual function is declared by adding "= 0" to the end of its declaration. This tells the compiler that this function must be implemented by any derived classes, and that the base class cannot be instantiated directly.

## Abstract class can't now be instantied directly
!!!! this will produce error:
``` C++

Animal a;  // This will now cause a compiler error
Animal* a = new Animal();  // This will also cause an error
```

however, we can use Animal base class as pointer  instanciated cat and dogs classes
``` C++
Animal* pet = new Cat();  // This is still valid
```


# Solution
- same as ex00, we just delete default makeSound class and add to header:
virtual void makeSound() const = 0;
- compiler now knows that this method is purely virtual and definiton is provided in specific child class.
- virtual keyword words as normally --> create a virtual table mapping for each class which points to class specific overrided function (makeSound)