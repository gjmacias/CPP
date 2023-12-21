#include "Harl.hpp"

#include <iostream>
#include <fstream>

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string line)
{
	int	i = -1;
	std::string	complainLevels[Harl::_levels] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	f			functions[Harl::_levels] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	while (++i < Harl::_levels) 
	{
		if (complainLevels[i].compare(line) == 0)
		{
			(this->*(functions[i]))();
			return ;
		}
	}
	std::cerr << "Error: Invalid complain level" << std::endl;	
}

void Harl::debug() {
	std::cout
		<< "[ DEBUG ]\n"
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I just love it!"
		<< std::endl;
}

void Harl::info() {
	std::cout
		<< "[ INFO ]\n"
		<< "I cannot believe adding extra bacon cost more money."
		<< " You don’t put enough!"
		<< " If you did I would not have to ask for it!"
		<< std::endl;
}

void Harl::warning() {
	std::cout
		<< "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free."
		<< " I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void Harl::error() {
	std::cout
		<< "[ ERROR ]\n"
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
