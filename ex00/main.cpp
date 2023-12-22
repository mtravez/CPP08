#include "easyfind.hpp"
#include <list>

int main()
{
	std::list<int> lst;
	int toFind = 6;
	lst.push_back(5);
	lst.push_back(5);
	lst.push_back(5);
	lst.push_back(toFind);
	lst.push_back(5);

	std::cout << easyfind(lst, toFind) << std::endl;
}