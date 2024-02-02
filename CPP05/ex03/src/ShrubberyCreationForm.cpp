
#include "ShrubberyCreationForm.hpp"

#include <fstream>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("shrubbery creation","none", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
		: Form("shrubbery creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form created" << this->getTarget() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
		: Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{
	*this = other;

	std::cout << "Copy of Shrubbery Creation Form created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation Form destroyed" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this == &other) return (*this);

	std::cout << "Shrubbery Creation Form assignment operator" << std::endl;
	return (*this);
}



/*********** FUNCTION ***********/

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream out((this->getTarget() + "_shrubbery").c_str());

	if (out.is_open())
	{
		out << std::endl;
		out << "               ,@@@@@@@,                  " << std::endl;
		out << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
		out << "    ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o     " << std::endl;
		out << "   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'    " << std::endl;
		out << "   %&&%&%&/%&&%@@|@@/ /@@@88888|88888'    " << std::endl;
		out << "   %&&%/ %&&%&&@@| V /@@' `88|8 `/88'     " << std::endl;
		out << "   `&%| ` /%&'    |.|        | '|8'       " << std::endl;
		out << "       |o|        | |         | |         " << std::endl;
		out << "       |.|        | |         | |         " << std::endl;
		out << "    ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ " << std::endl;
		out.close();
	}
	else {
		std::cerr << "ERROR: CANNOT open the file" << std::endl;
	}
}
