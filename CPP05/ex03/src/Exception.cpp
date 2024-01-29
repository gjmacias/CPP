
# include "Exception.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Exception::Exception() {}

Exception::Exception(std::string type) : _type("Exception: grade too " + type) {}

Exception::~Exception() throw() {}

Exception::Exception(const Exception &other)
{
	*this = other;
}

Exception& Exception::operator=(const Exception& other)
{
	this->_type = other._type;
	return(*this);
}



/*********** FUNCTIONS ***********/

const char* Exception::what() const throw ()
{
	return (_type.c_str());
}
