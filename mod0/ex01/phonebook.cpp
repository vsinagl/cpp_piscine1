#include "PhoneBook.hpp"
#include <iomanip>


PhoneBook::PhoneBook()
{
	_nbContacts = 0;
}


PhoneBook::~PhoneBook()
{
}


void PhoneBook::welcome()
{
	std::cout << std::endl << "++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "Welcome to the awesome phonebook! 📓 " << std::endl;
	std::cout << " - You can add up to 8 contacts." << std::endl;
	std::cout << "\t- When you try to add more than 8 contacts, the 8th contact will be replaced by contact you try to add" << std::endl;
	std::cout << " - You can search for a contact by typing 'SEARCH'." << std::endl;
	std::cout << " - You can add a contact by typing 'ADD'." << std::endl;
	std::cout << " - You can exit the phonebook by typing 'EXIT'.\n" << std::endl;

}

void PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phone, darksecret;

	std::cout << "+++++ ADD CONTACT +++++" << std::endl;
	std::cout << "First name: ";
	std::cin >> firstName;
	std::cout << std::endl << "Last name: ";
	std::cin >> lastName;
	std::cout << std::endl << "Nickname: ";
	std::cin >> nickname;
	std::cout << std::endl << "Phone: ";
	std::cin >> phone;
	std::cout << std::endl << "Dark secret: ";
	std::cin >> darksecret;

	if (_nbContacts >= MAX_CONTACTS)
	{
		std::cout << "Phonebook is full. Replacing the 8th contact." << std::endl;
		_nbContacts = 7;
	}
	_contacts[_nbContacts] = Contact(_nbContacts, firstName, lastName, nickname, phone, darksecret);
	_nbContacts++;
	std::cout << std::endl << "Contact added successfully!" << std::endl;
}

void	PhoneBook::_printTable()
{
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;

	for (int i = 0; i < _nbContacts; i++)
		_contacts[i].displayContact();
}

void PhoneBook::searchContact()
{
	std::string indexToSearch;

	if (_nbContacts == 0)
	{
		std::cout << "No contacts to search for.\n" << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_printTable();

	std::cout << "Enter index of the contact you want to see: ";
	std::cin >> indexToSearch;	
	if (indexToSearch.empty() || indexToSearch.length() > 1)
	{
		std::cout << "Invalid index. Please try again." << std::endl;
		return ;
	}
	else if (indexToSearch[0] < '0' || indexToSearch[0] > '8')
	{
		std::cout << "Invalid index. Please try again." << std::endl;
		return ;
	}
	else if (indexToSearch[0] - '0' >= _nbContacts)
	{
		std::cout << "No contact with this index. Please try again." << std::endl;
		return ;
	}
	_contacts[indexToSearch[0] - '0'].displayFullContact();
	return ;
}


void PhoneBook::startPhoneShell()
{
	std::string command;

	PhoneBook::welcome();
	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		if (std::cin.eof())  //handling ctrl-d (eof) separetly
		{
    		exit(1);
		}
		else if (command == "ADD")
			addContact();
		else if (command == "SEARCH")
			searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
}


