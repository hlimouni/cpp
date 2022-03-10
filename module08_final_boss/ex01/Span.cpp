#include "Span.hpp"

Span::Span(unsigned int N)
    : _max(N), _size(0)
{
}

Span::Span(Span const &obj)
{
    *this = obj;
}

Span const & Span::operator=(Span const &obj)
{
    if (this != &obj)
    {
        if (obj._max)
        {
            this->_max = obj._max;
            this->_size = obj._size;
            this->_set = obj._set;
        }
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if (this->_size < _max)
    {
        this->_set.insert(number);
        this->_size++;
    }
    else
        throw std::runtime_error("span is full");
}

unsigned int Span::shortestSpan() const
{
    if (this->_size < 2)
        throw std::runtime_error("Can't find shortestSpan");

    std::multiset<int>::iterator it = _set.begin();
    std::multiset<int>::iterator end = prev(_set.end());
    unsigned int shortest = *(next(it)) - *(it);
    unsigned int sub;
    while (it != end)
    {
        if (shortest > (sub = (*(next(it)) - *(it))))
        {
            shortest = sub;
        }
		it++;
    }
    return (shortest);
}

unsigned int Span::longestSpan() const
{
    if (this->_size < 2)
        throw std::runtime_error("Can't find longestSpan");

    return (*(prev(_set.end())) - *((_set.begin())));
}

// unsigned int Span::shortestSpan() const
// {
//     if (_max < 2)
//         throw std::runtime_error("Can't find shortestSpan");

//     std::multiset<int>::iterator it = _set.begin();
//     std::multiset<int>::iterator end = --_set.end();
//     unsigned int shortest = *(it++) - *(it);
//     unsigned int sub;
//     while (it != end)
//     {
//         if (shortest > (sub = (*(it++) - *(it))))
//         {
//             shortest = sub;
//         }
//     }
//     return (shortest);
// }

// unsigned int Span::longestSpan() const
// {
//     if (_max < 2)
//         throw std::runtime_error("Can't find longestSpan");

//     return (*(this->_set.begin()) - *(--(this->_set.end())));
// }