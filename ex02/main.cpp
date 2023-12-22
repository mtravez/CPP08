#include "MutantStack.hpp"
#include <string>
#include <vector>
#include <list>
#include <algorithm>

//int main() {
//	MutantStack<int> mstack;
//	mstack.push(5);
//	mstack.push(17);
//	std::cout << mstack.top() << std::endl;
//	mstack.pop();
//	std::cout << mstack.size() << std::endl;
//	mstack.push(3);
//	mstack.push(5);
//	mstack.push(737);
////[...]
//	mstack.push(0);
//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite) {
//		std::cout << *it << std::endl;
//		++it;
//	}
//	std::stack<int> s(mstack);
//	return 0;
//}

//int main() {
//	std::list<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.back() << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
////[...]
//	mstack.push_back(0);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite) {
//		std::cout << *it << std::endl;
//		++it;
//	}
////	std::stack<int> s(mstack);
//	return 0;
//}

//int main()
//{
//	std::vector<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.front() << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
////[...]
//	mstack.push_back(0);
//	std::vector<int>::iterator it = mstack.begin();
//	std::vector<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	std::stack<int> s(mstack);
//	return 0;
//}

void printAll(std::string str)
{
	std::cout << "{" << str << "}";
}

int main()
{
	MutantStack<std::string> ms;

	ms.push("hello");
	ms.push(" ");
	ms.push("world");
	ms.push("!\n");
	MutantStack<std::string>::iterator it = ms.begin();

	while (it != ms.end())
	{
		std::cout << *it;
		it++;
	}

	std::cout << "Stack size: " << ms.size() << std::endl;
	ms.pop();
	std::cout << "Stack size: " << ms.size() << std::endl;
	std::reverse(ms.begin(), ms.end());
	it = ms.begin();

	while (it != ms.end())
	{
		std::cout << *it;
		it++;
	}

	std::reverse(ms.begin(), ms.end());
	std::cout << std::endl;
	std::for_each(ms.begin(), ms.end(), printAll);
	std::cout << std::endl;

	std::sort(ms.begin(), ms.end());

	std::for_each(ms.begin(), ms.end(), printAll);
	return 0;
}