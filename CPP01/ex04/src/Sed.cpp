#include "Sed.hpp"

#include <iostream>
#include <fstream>

Sed::Sed(void) {}

Sed::~Sed(void) {}

std::string	Sed::_strReplace(std::string line, std::string const s1, std::string const s2)
{
	std::string	out;
	size_t		index = 0;
	size_t		end = 0;

	while (true)
	{
		end = line.find(s1, index);
		if (end == std::string::npos) break;

		out.append(line, index, end - index);
		index = end + s1.size();
		out.append(s2);
	}
	out.append(line, index);

	return (out);
}

int	Sed::replace(std::string const filename, std::string const s1, std::string const s2)
{
	if (filename.empty() || s1.empty() || s2.empty()) {
		std::cerr << "Error: empty argument" << std::endl;
		return (1);
	}
	std::ofstream	output;
	std::ifstream	input;

	input.open(filename.c_str(), std::ifstream::in);
	if (input.is_open() == false) {
		std::cerr << "Error: could not open \"" << filename << "\"." << std::endl;
		return (1);
	}
	output.open((filename + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (output.is_open() == false) {
		std::cerr << "Error: could not open \"" << filename << "\"." << std::endl;
		input.close();
		return (1);
	}

	std::string	line;

	while (std::getline(input, line, '\n').good())
	{
		output << Sed::_strReplace(line, s1, s2);
		if (input.eof() == false) {
			output << std::endl;
		}
	}
	input.close();
	output.close();
	return (0);
}
