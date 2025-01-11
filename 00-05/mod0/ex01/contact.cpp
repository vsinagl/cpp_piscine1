#include "Contact.hpp"
#include <iomanip> 
#include <sstream>

/*
empty constructor, enable to initialize class without any parametrs
you can have more constructors if you wish
*/
Contact::Contact()
{
}

/*
Constructor, initialize the variables specified in Contacts.hpp
*/
Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickname,
                std::string phone, std::string darksecret)
{
    _index = index;
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _phone = phone;
    _darksecret = darksecret;
}

/*
Destructor is empty when class contains elemeents which can clean up for themselves.
This is for example:
	- primitives as integer, char, float, double etc..
	- standart library objects as std::string, std::vector, std::map etc..
for anything allocated with malloc (eg. char * --> but don't use it in C++,
used std::string instead) --> you should handle cleaning memory in destructor.
0
*/
Contact::~Contact(void)
{
}

/*
Helper function - fomat string to display in columnar format
--> setw don't truncate the string, so i need to write separate 
function for it. 
*/
std::string Contact::_formatString(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

// converts string to number
std::string Contact::_intToString(int number)
{
    std::stringstream ss;
    ss << number;
    return ss.str();
}

// Print contanct details (index, first name, last name, nickname) to the console
void Contact::displayContact(void)
{
    std::cout << "|" << std::setw(10) << Contact::_formatString(Contact::_intToString(_index));
    std::cout << "|" << std::setw(10) << Contact::_formatString(_firstName);
    std::cout << "|" << std::setw(10) << Contact::_formatString(_lastName);
    std::cout << "|" << std::setw(10) << Contact::_formatString(_nickname) << "|" << std::endl;
}

void Contact::displayFullContact(void)
{
    std::cout << "First name: " << _firstName << std::endl;
    std::cout << "Last name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone: " << _phone << std::endl;
    std::cout << "Dark secret: " << _darksecret << std::endl;
}

int Contact::getIndex(void)
{
    return _index;
}

std::string Contact::getFirstName(void)
{
    return _firstName;
}

std::string Contact::getLastName(void)
{
    return _lastName;
}

std::string Contact::getNickname(void)
{
    return _nickname;
}