
#include "Contact.hpp"

#include <iomanip>
#include <climits>

Contact::Contact() {}

Contact::~Contact() {}

namespace MyUtilities
{
	bool isOnlySpace(const std::string &str)
	{
		int i = -1;

		while (str[++i])
		{
			if (!std::isspace(str[i])) {
				return (false); 
			}
		}
		return true;
	}

	bool isNumeric(const std::string &str)
	{
		int i = -1;

		while (str[++i])
		{
			if (!std::isdigit(str[i])) {
				return (false); 
			}
		}
		return true;
	}

	bool isProgram(const std::string &str)
	{
		int i = -1;

		while (str[++i])
		{
			if ((str[i] >= '#' && str[i] <= ')')
				|| (str[i] >= '[' && str[i] <= ']')
				|| (str[i] >= '{' && str[i] <= '}')) {
				return true; 
			}
		}
		return (false);
	}

	void	controlD(void)
	{
		std::cout << "\nForcing EXIT from PhoneBook. Bye!!" << std::endl;
		std::cin.clear();
		std::exit(EXIT_FAILURE);
	}
}

bool	Contact::setString(const char *s, fields field)
{
	std::string	input;

	std::cout << "Add contact: " << s;
	if (!std::getline(std::cin, input)) {
		MyUtilities::controlD();
	}
	if ( field == FirstName && (input.empty() || MyUtilities::isOnlySpace(input)))
	{
		std::cout << "Needs some parameter. Try again.\n" << std::endl;
		std::cin.clear();
		return (false);
	}
	else if ( MyUtilities::isProgram(input))
	{
		std::cout << "Error, avoid special characters. Try again.\n" << std::endl;
		std::cin.clear();
		return (false);
	}
	fieldsInfo[field] = input;
	std::cin.clear();
	return (true);
}

bool	Contact::setNumber(const char *s, fields field)
{
	std::string	input;

	std::cout << "Add contact: " << s;
	if (!std::getline(std::cin, input)) {
		MyUtilities::controlD();
	}
	if ( input.length() != 9 || !MyUtilities::isNumeric(input))
	{
		std::cout << "Needs 9 numbers to continue. Try again.\n" << std::endl;
		std::cin.clear();
		return (false);
	}
	fieldsInfo[field] = input;
	std::cin.clear();
	return (true);
}

void	Contact::setInformation(int id)
{
	this->index = id;
	while (!setString("Name (required): ", FirstName)){}
	while (!setString("Last name:       ", LastName)){}
	while (!setString("Nickname:        ", Nickname)){}
	while (!setNumber("Phone:           ", Phone)){}
	while (!setString("Darkest secret:  ", Secret)){}
}

void	Contact::displayContact(void)
{
	int	id = FirstName;

	std::cout << "===== Information of contact #" << this->index << " =====\n\n";

	std::cout << "# Name:           " << this->fieldsInfo[id++] << "\n";
	std::cout << "# Last name:      " << this->fieldsInfo[id++] << "\n";
	std::cout << "# Nickname:       " << this->fieldsInfo[id++] << "\n";
	std::cout << "# Phone number:   " << this->fieldsInfo[id++] << "\n";
	std::cout << "# Darkest secret: " << this->fieldsInfo[id] << std::endl;
}

void Contact::tableDisplay(void)
{
	int	i = -1;

	std::cout << "|" << std::right << std::setw(10) << this->index;
	while (++i < 3)
	{
		std::cout << "|";
		if (this->fieldsInfo[i].length() > 10) {
			std::cout << this->fieldsInfo[i].substr(0, 9) << ".";
		}
		else {
			std::cout << std::right << std::setw(10) << this->fieldsInfo[i];
		}
	}
	std::cout << "|" << std::endl;
}
