#include "Point.hpp"

#include <iostream>

int main( void )

{
	// No triangle
	std::cout << "NO TRIANGLE:" << std::endl;
	{
		Point	a(0.0f, 0.0f);
		Point	b(0.0f, 0.0f);
		Point	c(0.0f, 0.0f);
		Point	p(0.0f, 0.0f);
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

	// Test inside
	std::cout << "\nTEST INSIDE:" << std::endl;
	{
		Point c(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point a(Fixed(), Fixed(1));
		Point p(Fixed(0.4f), Fixed(0.4f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
	}

	// Test edges
	std::cout << "\nTEST EDGES:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(0.5f), Fixed(0.5f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

	// Test vertex
	std::cout << "\nTEST VERTEX:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(), Fixed(0.5f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
		std::cout << "2. " << (bsp(a, b, c, a) ? "true" : "false") << std::endl; // 2. false
		std::cout << "3. " << (bsp(a, b, c, b) ? "true" : "false") << std::endl; // 3. false
		std::cout << "4. " << (bsp(a, b, c, c) ? "true" : "false") << std::endl; // 4. false
	}
}
