#include "PhoneBook.hpp" 

#include <sstream>

PhoneBook::PhoneBook() : id(0) , showAll(false) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	if (id >= this->MAX_CONTACTS) {
		showAll = true;
		id = 0;
	}	
	contacts[id].setInformation(id + 1);
	id++;
	std::cout << "New contact added succesfully\n" << std::endl;
}

int	PhoneBook::numbersOfContacts(void)
{
	int	n_show;

	if (showAll == true){
		n_show = MAX_CONTACTS;
	}
	else {
		n_show = id;
	}
	return (n_show);
}

void	PhoneBook::headerSearchContact(void)
{
	int	i = -1;

	std::cout << "\n"
	<< "·-------------------------------------------·\n"
	<< "|     Index| FirstName|  LastName|  Nickname|\n"
	<< "|-------------------------------------------|\n";
	while (++i < this->numbersOfContacts()) {
		this->contacts[i].tableDisplay();
	}
	std::cout << "·-------------------------------------------·" << std::endl;
	std::cout << "Select contact to show. Type \"EXIT\" to return\n";
}

void	PhoneBook::searchContact() 
{
	bool		show = false;
	int			id;
	std::string	input;

	this->headerSearchContact();
	while (true)
	{
		std::cout << "Index: " << std::flush;
		std::getline(std::cin, input);
		if (input == "EXIT") {
			break ;
		}
		else 
		{
			if (input.length() == 1 && MyUtilities::isNumeric(input)) 
			{
				id = std::stoi(input);
				if (id > 0 && id <= this->numbersOfContacts())
				{
					show = true;
					break;
				}
				else {
					std::cout << "Invalid value. Select Index or \"EXIT\" to return\n" << std::endl;
				}
			}
			else {
				std::cout << "Invalid value. Select Index or \"EXIT\" to return\n" << std::endl;
			}
		}
	}
	std::cin.clear();
	std::cout << std::endl;
	if (show) {
		this->contacts[id - 1].displayContact();
	}
}