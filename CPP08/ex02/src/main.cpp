
#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main()
{
	std::cout << "========== MUTANT STACK ==========" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5); // 5
	mstack.push(17); // 17, 5
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop(); // 5
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3); // 3, 5
	mstack.push(7); // 7, 3, 5
	mstack.push(737); // 737, 7, 3, 5
	mstack.push(0); // 0, 737, 7, 3, 5
	std::cout << "Size: " << mstack.size() << std::endl;


	std::cout << "\nITERATE STACK:" << std::endl;
	MutantStack<int>::iterator iterator_start = mstack.begin();
	MutantStack<int>::iterator iterator_end = mstack.end();
	++iterator_start;
	--iterator_start;
	while (iterator_start != iterator_end)
	{
		std::cout << *iterator_start << std::endl;
		++iterator_start;
	}

	std::cout << "========== LIST ==========" << std::endl;
	
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "Back: " << lst.back() << std::endl;
	lst.pop_back();
	std::cout << "Size: " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(7);
	lst.push_back(737);
	lst.push_back(0);
	std::cout << "Size: " << lst.size() << std::endl;


	std::cout << "\nITERATE LIST:" << std::endl;
	std::list<int>::iterator lst_iter_start = lst.begin();
	std::list<int>::iterator lst_iter_end = lst.end();
	++lst_iter_start;
	--lst_iter_start;
	while (lst_iter_start != lst_iter_end)
	{
		std::cout << *lst_iter_start << std::endl;
		++lst_iter_start;
	}

	return 0;
}
