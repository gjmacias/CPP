
#include "Bureaucrat.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
		: _name(name), _grade(grade)
{
	checkGrade(grade);
	std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
		: _name(other._name)
{
	*this = other;
	std::cout << "Copy of bureaucrat created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destroyed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->_grade = other._grade;

	std::cout << "Assignment operator" << std::endl;
	return (*this);
}



/*********** FUNCTIONS ***********/

const std::string& Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::increment()
{
	std::cout << "Incrementing grade by 1" << std::endl;
	checkGrade(this->_grade - 1);
	--this->_grade;
}

void Bureaucrat::increment(int quantity)
{
	std::cout << "Incrementing grade by " << quantity << std::endl;
	checkGrade(this->_grade - quantity);
	this->_grade -= quantity;
}

void Bureaucrat::decrement()
{
	std::cout << "Decrementing grade by 1" << std::endl;
	checkGrade(this->_grade + 1);
	++this->_grade;
}

void Bureaucrat::decrement(int quantity)
{
	std::cout << "Decrementing grade by " << quantity << std::endl;
	checkGrade(this->_grade + quantity);
	this->_grade += quantity;
}

void Bureaucrat::checkGrade(int grade) 
{
	if (grade < MAX_GRADE) throw GradeTooHighException();
	if (grade > MIN_GRADE) throw GradeTooLowException();
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form& form)
{
	try {
		form.beExecuted(*this);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}



/*********** EXEPTION ***********/

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception: grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception: grade too low";
}




/*********** COUT ***********/

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance) {
	os << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return os;
}
