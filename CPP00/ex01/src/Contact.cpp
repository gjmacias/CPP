
#include "Contact.hpp"

#include <iomanip>
#include <climits>

Contact::Contact() {}

Contact::~Contact() {}

namespace MyUtilities
{
    bool isNumeric(const std::string &str)
    {
        for (char c : str)
        {
            if (!std::isdigit(c)) {
                return false; 
            }
        }
        return true;
    }
}

bool	Contact::setString(const char *s, fields field)
{
	std::string	input;

	std::cout << "Add contact: " << s;
	std::getline(std::cin, input);
	if ( input.empty())
	{
		std::cout << "Needs some parameter. Try again.\n" << std::endl;
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
	std::getline(std::cin, input);
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