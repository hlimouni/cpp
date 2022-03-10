#ifndef __SPAN_HPP
#define __SPAN_HPP
#include <iostream>
#include <exception>
#include <set>

class Span
{
private:
    unsigned int _max;
    unsigned int _size;
    std::multiset<int> _set;
    Span();

public:
    Span(unsigned int N);
    Span(Span const & copy);
    Span const & operator=(Span const & rhs);
    ~Span();

    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    template <typename T>
    void addNumber(T beginIt, T endIt)
    {
		this->_set.insert(beginIt, endIt);
    }
};

#endif