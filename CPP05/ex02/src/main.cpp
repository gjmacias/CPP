
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main()
{
	std::cout << "\n========== FORM ==========\n" << std::endl;

	Bureaucrat* b150 = new Bureaucrat("b150", 150);
	Bureaucrat* b140 = new Bureaucrat("b140", 140);
	Bureaucrat* b100 = new Bureaucrat("b100", 100);
	Bureaucrat* b1 = new Bureaucrat("b1", 1);

	std::cout << std::endl;

	std::cout << *b150 << std::endl;
	std::cout << *b140 << std::endl;
	std::cout << *b100 << std::endl;
	std::cout << *b1 << std::endl;

	std::cout << std::endl;

	ShrubberyCreationForm *garden = new ShrubberyCreationForm("garden");
	RobotomyRequestForm *neighbor = new RobotomyRequestForm("neighbor");
	PresidentialPardonForm *rick = new PresidentialPardonForm("rick");

	std::cout << std::endl;

	std::cout << *garden << std::endl;
	std::cout << *neighbor << std::endl;
	std::cout << *rick << std::endl;

	std::cout << std::endl;
	std::cout << "--------- ShrubberyCreationForm --------" << std::endl;

	try { // try to execute before sign
		b100->executeForm(*garden);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // try to sign with low level
		b150->signForm(*garden);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // sign
		b140->signForm(*garden);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *garden << std::endl; // display update info
	try { // try to execute with low level
		b140->executeForm(*garden);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b100->executeForm(*garden);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "--------- RobotomyRequestForm ---------" << std::endl;

	try { // sign
		b1->signForm(*neighbor);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b1->executeForm(*neighbor);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------- PresidentialPardonForm ---------" << std::endl;

	try { // sign
		b1->signForm(*rick);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b1->executeForm(*rick);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------- DELETE ---------" << std::endl;

	delete garden;
	delete neighbor;
	delete rick;

	std::cout << std::endl;

	delete b150;
	delete b140;
	delete b100;
	delete b1;

	return (0);
}
