#ifndef CAT_HPP
#define CATP_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		void makeSound() const;
};

#endif