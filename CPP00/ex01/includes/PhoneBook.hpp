#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		bool				showAll;
		int					id;
		static const int	MAX_CONTACTS = 8;
		Contact				contacts[MAX_CONTACTS];
	public:
		PhoneBook();
		virtual ~PhoneBook();

		void	addContact(void);
		void	searchContact(void);
		void	headerSearchContact(void);
		int		numbersOfContacts(void);
};

#endif