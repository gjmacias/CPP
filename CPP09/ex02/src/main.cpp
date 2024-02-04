#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>

#include "PmergeMe.hpp"

template <class T>
void print_okey(const T &c)
{
	typedef typename T::const_iterator	const_iterator;
	const_iterator	prev = c.begin();

	for (const_iterator	it = (c.begin() + 1); it != c.end(); ++it)
	{
		if (*prev > *it)
		{
			std::cout << "KO :(" << std::endl;
			return ;
		}
		prev = it;
	}
	std::cout << "OK :D" << std::endl;
}

template <class T>
void print_container(const std::string &message, const T &c)
{
	typedef typename T::const_iterator	const_iterator;

	std::cout << message;
	for (const_iterator it = c.begin(); it != c.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <class T>
double bench_container(T &c)
{
	std::clock_t	start = std::clock();
	PmergeMe::process(c);
	std::clock_t	end = std::clock();
	double			elapsed = (1.0 * (end - start) / CLOCKS_PER_SEC * 1000.0); // put 1.0 to convert clock_t <end, start> to: double
	
	return (elapsed);
}

int main(int words, char *arg[])
{
	std::vector<int>	v;
	std::deque<int>		d;
	
	if (words < 2)
	{
		std::cout << "Error: No arguments provided." << std::endl;
		return (1);
	}
	for (int i = 1; i < words; ++i)
	{
		std::stringstream ss(arg[i]);
		int num;
		if (!(ss >> num) || !ss.eof())
		{
			std::cout << "Error: Invalid input." << std::endl;
			return (1);
		}
		if (num < 0)
		{
			std::cout << "Error: Negative numbers are not allowed." << std::endl;
			return (1);
		}
		v.push_back(num);
		d.push_back(num);
	}

	print_container("Before: <vector>: ", v);
	print_container("Before: <deque> : ", d);

	double time_vector = bench_container(v);
	double time_deque = bench_container(d);

	print_container("After: <vector>: ", v);
	print_container("After: <deque> : ", v);

	std::cout << "Time to process a range of "
				<< v.size()
				<< " elements with std::vector : "
				<< time_vector
				<< " ms" << std::endl;

	std::cout << "Time to process a range of "
				<< d.size()
				<< " elements with std::deque : "
				<< time_deque
				<< " ms" << std::endl;

	print_okey(v);
	print_okey(d);

	return (0);
}
