#include <iostream>

#include "RPN.hpp"

int main(int words, char *arg[])
{
	if (words != 2)
	{
		std::cerr << "BAD Usage: USE <\">: EJ: \" OPERATION \"" << std::endl;
		return (1);
	}
	try
	{
		int res = RPN::ResolveExpression(arg[1]);
		std::cout << "Result: " << res << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
