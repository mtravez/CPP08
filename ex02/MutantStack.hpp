#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>(){}
	~MutantStack(){};
	MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack){};
	MutantStack &operator=(const MutantStack &mutantStack)
	{
		this->c = mutantStack.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type container_type;
	typedef typename container_type::iterator iterator;
//	typedef typename container_type::const_iterator const_iterator;
//	typedef typename container_type::reverse_iterator reverse_iterator;
//	typedef typename container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){
		return this->c.begin();
	}

	iterator end(){
		return this->c.end();
	}

};