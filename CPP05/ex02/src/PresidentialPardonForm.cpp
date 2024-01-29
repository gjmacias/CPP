
#include "PresidentialPardonForm.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

PresidentialPardonForm::PresidentialPardonForm()
		: Form("presidential pardon", "none", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
		: Form("presidential pardon", target, 25, 5) {
	std::cout << "Presidential Pardon Form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
		: Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{
	*this = other;

	std::cout << "Copy of Presidential Pardon Form created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Presidential Pardon Form destroyed" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this == &other) return (*this);

	std::cout << "Presidential Pardon Form assignment operator" << std::endl;
	return (*this);
}



/*********** FUNCTION ***********/

void PresidentialPardonForm::executeAction() const {
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}