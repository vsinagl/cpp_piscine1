#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
    	WrongAnimal( const WrongAnimal& src );
    	WrongAnimal& operator=( const WrongAnimal& rhs );

		std::string getType() const;
		void makeSound() const;
	
	protected:
		std::string type;
};

#endif