#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
bool easyfind(T &container, int toFind)
{
	try {
		if (std::find(container.begin(), container.end(), toFind) != container.end())
			return (true);
		return (false);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		return false;
	}
}