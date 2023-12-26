
#include "Fixed.hpp"

#include <iostream>

int main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	/*
	{
		std::cout << "\nTESTS:\n" << std::endl;
	
		Fixed a(4);
		Fixed const b(2);
	
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl << std::endl;

		std::cout << "a == a: " << (a == a) << std::endl;
		std::cout << "b == a: " << (b == a) << std::endl;

		std::cout << "a != a: " << (a != a) << std::endl;
		std::cout << "b != a: " << (b != a) << std::endl;

		std::cout << "a >= a: " << (a >= a) << std::endl;
		std::cout << "b >= a: " << (b >= a) << std::endl;

		std::cout << "a <= a: " << (a <= a) << std::endl;
		std::cout << "b <= a: " << (b <= a) << std::endl;

		std::cout << "a > a: " << (a > a) << std::endl;
		std::cout << "b > a: " << (b > a) << std::endl;

		std::cout << "a < a: " << (a < a) << std::endl;
		std::cout << "b < a: " << (b < a) << std::endl << std::endl;

		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;

		std::cout << "a--: " << a-- << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "--a: " << --a << std::endl;
		std::cout << "a: " << a << std::endl << std::endl;

		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "b + a: " << b + a << std::endl;
	
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "b - a: " << b - a << std::endl;
	
		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "b * a: " << b * a << std::endl;
	
		std::cout << "a / b: " << a / b << std::endl;
		std::cout << "b / a: " << b / a << std::endl << std::endl;
	
		std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
		std::cout << "max(b, a): " << Fixed::max(a, b) << std::endl;
	
		std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
		std::cout << "min(b, a): " << Fixed::min(a, b) << std::endl;
	
		return 0;
	}
	*/
	return (0);
}
