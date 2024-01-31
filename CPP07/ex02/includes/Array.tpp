#include "Array.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

template<typename T>
Array<T>::Array() : _head(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int size) : _head(new T[size]), _size(size) {}

template<typename T>
Array<T>::Array(const Array<T>& other) : _head(NULL)
{
	*this = other;
}

template<typename T>
Array<T>::~Array() {
	delete[] _head;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this == &other) return (*this);

	if (_size != other._size)
	{
		delete[] _head;
		_head = new T[other._size];
		_size = other._size;
	}
	for (std::size_t i = 0; i < _size; ++i)
	{
		_head[i] = other._head[i];
	}
	return (*this);
}



/*********** FUNCTIONS ***********/

template<typename T>
T& Array<T>::operator[](std::size_t index)
{
	if (index >= _size) throw Array::InvalidIndexException();
	return (_head[index]);
}

template<typename T>
std::size_t Array<T>::size() const
{
	return (_size);
}



/*********** EXEPTION ***********/

template<typename T>
const char* Array<T>::InvalidIndexException::what() const throw()
{
	return "Invalid index: index is either bigger than size or less than 0";
}
