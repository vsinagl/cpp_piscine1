#ifndef CAT_HPP
#define CATP_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		~Cat();
		void makeSound() const;
		Cat& operator=(const Cat& src);
};

#endif