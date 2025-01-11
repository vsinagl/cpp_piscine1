
#include "Harl.hpp"
#include <iostream>


Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my burger. I deserve it after a long day!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years!" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}


void Harl::complain(std::string level)
{
	bool found = false;
	/*
	Special definition: declaring array of function pointers, which are types
	of pointer to class Harl !! --> harll::*complaints[4]
	the void at begging specify return type and void after "function array" definition
	specify  inputs to function pointer (function itself)
	*/
    void (Harl::*complaints[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] ==  level)
		{
            (this->*complaints[i])();
			found = true;
		}
	}
	if (found == false) {
		std::cout << "Invalid level of complaint" << std::endl;
	}
}
