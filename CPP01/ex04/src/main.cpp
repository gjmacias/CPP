#include "Sed.hpp"

#include <iostream>

int main(int words, char **arg)
{
	if(words == 4)
	{
		if (Sed::replace(arg[1], arg[2], arg[3]) == 0) {
			return (0);
		}
	}
	std::cerr << "Error: Invalid number of arguments." << std::endl;
	std::cerr << "Usage: <program> <file name> <search> <replace>" << std::endl;
	return (1);
}
