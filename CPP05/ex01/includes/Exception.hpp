#ifndef EXEPTION_HPP_
# define EXEPTION_HPP_

# include <string>
# include <iostream>
# include <exception>

class	Exception : public std::exception
{
	public:
		Exception(const std::string type);
		~Exception() throw();
		Exception(const Exception &other);

		Exception& operator=(const Exception& other);
		
		const char*			what() const throw ();
	private:
		Exception();

		std::string	_type;
};

#endif
