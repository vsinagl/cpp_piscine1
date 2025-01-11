#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
	private:
		std::string ideas[100];

	public:
    	Brain( void );
    	~Brain( void );
    	Brain( const Brain& src );
    	Brain& operator=( const Brain& rhs );
};

#endif