#include "Harl.hpp"

#include <iostream>

int main(int words, char **arg)
{
	Harl	*harl = new Harl;
	int		i = 0;

	while (++i < words)
	{
		if (i > 1) std::cout << std::endl;
		harl->complain(arg[i]);
	}
	delete harl;
	return (0);
}
