#ifndef __CHARTYPE_HPP
#define __CHARTYPE_HPP

#include <cerrno>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

class CharType
{

private:
	char _charScalar;
	bool _isPossible;
	bool _isDisplayable;

public:
    CharType();
	CharType(std::string const & string);
	CharType(CharType const & copy);
	CharType const & operator=(CharType const & rhs);
    ~CharType();

	char getCharScalar() const;
	bool isDisplayable() const;
	bool isPossible() const;
};

std::ostream &operator<<(std::ostream & os, const CharType & obj);

#endif