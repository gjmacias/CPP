
#include "Intern.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Intern::Intern() {
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern& other)
{
	*this = other;

	std::cout << "Copy of Intern created" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destroyed" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	if (this == &other) return (*this);

	std::cout << "Intern assignment operator" << std::endl;
	return (*this);
}



/*********** FUNCTIONS ***********/

Form* Intern::makeForm(std::string name, std::string target)
{
	t_forms forms[N_FORMS] =
	{
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "presidential pardon", new PresidentialPardonForm(target) }
	};

	Form* ret = NULL;
	for (int i = 0; i < N_FORMS; i++)
	{
		if (forms[i].name == name) ret = forms[i].formClass;
		else delete forms[i].formClass;
	}

	if (ret) std::cout << "Intern creates form " << name << std::endl;
	else std::cout << "Intern was not able to find the form " << name << std::endl;

	return (ret);
}
