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

//	std::cout << std::find_first_of(lst.begin(), lst.end(), 2);
//	std::cout << easyfind(lst, 2) << std::endl;
	std::cout << easyfind(lst, toFind) << std::endl;
}