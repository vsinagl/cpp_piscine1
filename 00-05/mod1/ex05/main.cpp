#include "Harl.hpp"
#include <string>
#include <iostream>


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harl [ DEBUG/INFO/WARNING/ERROR ]" << std::endl;
		return 1;
	}
	Harl().complain(argv[1]);
	return 0;
}