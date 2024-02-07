#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <string>
#include <map>
#include <iostream>

class BitcoinExchange
{
	public:
		BitcoinExchange(const std::string &filename);
		~BitcoinExchange();

		void	ProcessInput(const std::string &filename);
	private:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange& operator=(const BitcoinExchange &other);

		double	GetExchangeRate(const std::string &date);
		bool	ValidateDate(const std::string &date);
		bool	ValidateValue(const double &value);
		
		std::map<std::string, double>	_data;
};

#endif
