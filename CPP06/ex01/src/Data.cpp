
#include "Data.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Data::~Data() {}

Data::Data() {}

Data::Data(const Data& other) { *this = other; }

Data& Data::operator=(const Data& other) 
{
	if (this == &other)
		return (*this);
	*this = other;

	return (*this);
}

/*********** Functions ***********/

uintptr_t Data::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
