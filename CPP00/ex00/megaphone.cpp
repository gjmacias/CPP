#include <iostream>

int	main(int words, char **arguments)
{
	int	i;
	int	j;

	if (words == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE. *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < words)
	{
		j = 0;
		while (arguments[i][j] != '\0')
		{
			std::cout << (char)(std::toupper(arguments[i][j]));
			j++;
		}
		if (i != words - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}