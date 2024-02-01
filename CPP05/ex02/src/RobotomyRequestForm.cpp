
#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

RobotomyRequestForm::RobotomyRequestForm()
		: Form("robotomy request", "none", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
		: Form("robotomy request", target, 72, 45) {
	std::cout << "Robotomy Request Form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
		: Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{
	*this = other;

	std::cout << "Copy of Robotomy Request Form created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Request Form destroyed" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this == &other) return (*this);

	std::cout << "Robotomy Request Form assignment operator" << std::endl;
	return (*this);
}



/*********** FUNCTION ***********/

void RobotomyRequestForm::executeAction() const
{
	std::srand(std::time(NULL));

	std::cout << "* SOME DRILLING NOISES *" << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	}
	else {
		std::cout << "Failed to robotomized " << this->getTarget() << std::endl;
	}
}
