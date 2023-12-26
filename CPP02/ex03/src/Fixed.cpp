#include "Fixed.hpp"

#include <iostream>
#include <cmath>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Fixed::Fixed() : _rawBits(0) {}

Fixed::Fixed(const int value) {
	this->_rawBits = value << Fixed::_nFracBits;
}

Fixed::Fixed(const float value) {
	this->_rawBits = roundf(value *(1 << Fixed::_nFracBits));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed::~Fixed() {}



/*********** COMPARATION OPERATORS ***********/

Fixed& Fixed::operator=(const Fixed& other) 
{
	if (this != &other) {
		this->_rawBits = other._rawBits; 
	}
	return *this;
}
bool Fixed::operator==(const Fixed& other) const {
	return (this->_rawBits == other._rawBits);
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->_rawBits != other._rawBits;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->_rawBits >= other._rawBits;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->_rawBits <= other._rawBits;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->_rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->_rawBits < other._rawBits;
}




/*********** ARITHMETIC OPERATORS ***********/

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed res;

	res._rawBits = (this->_rawBits + other._rawBits);
	return res;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed res;

	res._rawBits = (this->_rawBits - other._rawBits);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}



/*********** INCREMENT & DECREMENT ***********/

Fixed& Fixed::operator++() {
	++(this->_rawBits);
	return (*this);
}

Fixed& Fixed::operator--() {
	--(this->_rawBits);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed prev(*this);

	++(this->_rawBits);
	return prev;
}

Fixed Fixed::operator--(int) {
	Fixed prev(*this);

	--(this->_rawBits);
	return prev;
}



/*********** MIN & MAX ***********/

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b) return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b) return a;
	return b;
}




/*********** GETTER & SETTER ***********/

void Fixed::setRawBits(const int rawBits) {
	this->_rawBits = rawBits;
}

int Fixed::getRawBits() const {
	return this->_rawBits;
}





/*********** TO INT & TO FLOAT ***********/

int Fixed::toInt() const {
	return this->_rawBits >> Fixed::_nFracBits;
}

float Fixed::toFloat() const {
	return (float)this->_rawBits / (1 << Fixed::_nFracBits);
}




/*********** OSTREAM OPERATOR ***********/

std::ostream &operator<<(std::ostream &os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
