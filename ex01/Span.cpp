#include "Span.hpp"

Span::Span() : _size(0)
{
	return;
}

Span::Span(unsigned int N) : _size(N)
{
	return;
}

Span::Span(const Span &span) : _size(span._size), list(span.list)
{
	return;
}

Span::~Span() {return;}

Span &Span::operator=(const Span &span) {
	if (this != &span)
	{
		this->_size = span._size;
		this->list = span.list;
	}
	return *this;
}

void Span::addNumber(int n) {
	if (list.size() > this->_size)
		throw (TooManyNumbersException());
	list.push_back(n);
}

bool is_sorted(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	return std::adjacent_find(begin, end, std::greater<int>()) == end;
}

int Span::longestSpan() {
	if (list.empty() || list.size() <= 1)
		throw (NotEnoughNumbersException());
	if (!is_sorted(list.begin(), list.end()))
		std::sort(list.begin(), list.end());
	return (list.back() - list.front());
}

int Span::shortestSpan() {
	if (list.empty() || list.size() <= 1)
		throw (NotEnoughNumbersException());
	if (!is_sorted(list.begin(), list.end()))
		std::sort(list.begin(), list.end());
	int span = std::numeric_limits<int>::max();
	int lastNr = 0;
	for (std::vector<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		if ((*it - lastNr) < span)
			span = *it - lastNr;
		lastNr = *it;
	}
	return span;
}

void Span::addRandomNumbers(unsigned int N) {
	if (N > this->_size || N + list.size() > this->_size)
		throw (TooManyNumbersException());
	std::srand(static_cast<unsigned int>(std::time(0)));
	for (unsigned int i = 0; i < N; i++)
	{
		list.push_back((rand() + i) % (_size + 1));
	}
}

void printList(int i)
{
	std::cout << "{" << i << "} ";
}

void Span::printSpan() {
	std::for_each(list.begin(), list.end(), printList);
}