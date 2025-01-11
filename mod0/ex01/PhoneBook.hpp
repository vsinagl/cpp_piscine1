#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

# define CLEAR "\033[2J\033[H"
# define MAX_CONTACTS 8


class PhoneBook
{
	public:
				PhoneBook();
				~PhoneBook();
		void 	addContact();
		void 	searchContact();
		void	welcome();
		void	search();
		void	startPhoneShell();
	
	private:
		int		_nbContacts;
		Contact	_contacts[MAX_CONTACTS];	
		void	_printTable();

};

#endif 