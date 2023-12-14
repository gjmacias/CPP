#include <iostream>
#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	myPhoneBook;
	std::string	input;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (input == "EXIT") {
			break;
		}
		else if (input == "ADD") {
			myPhoneBook.addContact();
		}
		else if (input == "SEARCH") {
			myPhoneBook.searchContact();
		}
		else {
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT.\n" << std::endl;
		}
		std::cin.clear();
	}
	std::cin.clear();
	std::cout << std::endl;
    return (0);
}
