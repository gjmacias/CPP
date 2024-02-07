#include "BitcoinExchange.hpp"

int main(int words, char* arg[])
{
	if (words != 2)
	{
		std::cerr << "Error: Invalid number of arguments."
			  << "Usage: " << arg[0] << " INPUT_FILE" << std::endl;
		return (1);
	}
	BitcoinExchange	exchange("data.csv");
	exchange.ProcessInput(arg[1]);
	return (0);
}
