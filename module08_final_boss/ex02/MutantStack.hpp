#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <deque>
#include <stack>
#include <vector>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

public:
    MutantStack(){}
    MutantStack(MutantStack const & copy){ *this = copy; }
    MutantStack const & operator=(MutantStack const & rhs)
    {
		//calling the stack assignement operator
		std::stack<T, Container>::operator=(rhs);
    }
    ~MutantStack(){}

	typedef typename Container::iterator iterator;

    iterator begin()
    {
		return this->c.begin();
    }
    iterator end()
    {
		return this->c.end();
    }
};

#endif