#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>

class Contact 
{
	public:

		Contact();
		Contact(int index, std::string firstName, std::string lastName, std::string nickname,
				std::string phone, std::string darksecret);
		// Contact(void);
		~Contact(void);
		void				displayContact(void);
		int					getIndex(void);
		std::string			getFirstName(void);
		std::string			getLastName(void);
		std::string			getNickname(void);
		void				displayFullContact(void);

	private:
		int			_index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phone;
		std::string _darksecret;
		std::string _formatString(std::string str);
		std::string _intToString(int number);
};

Zombie	*newZombie( std::string name);
Zombie *randomChump( std::string name);

#endif