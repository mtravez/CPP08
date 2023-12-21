#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
#include <ctime>

class Span
{
private:
	unsigned int _size;
	std::vector<int> list;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &span);
	Span &operator=(const Span &span);
	~Span();

	void addNumber(int n);
	int shortestSpan(void);
	int	longestSpan(void);

	void addRandomNumbers(unsigned int N);
	void printSpan();

	class TooManyNumbersException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "TooManyNumbersException: there are too many numbers for the current Span";
		}
	};
	class NotEnoughNumbersException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "NotEnoughNumbersException: the span cannot be calculated because there's not enough numbers";
		}
	};
};