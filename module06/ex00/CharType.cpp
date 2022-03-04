#include "CharType.hpp"

CharType::CharType() : _isPossible(true), _isDisplayable(true)
{
}

CharType::CharType(std::string const & str) :_isPossible(true), _isDisplayable(true)
{
	// char tmp = static_cast<char>(str.c_str());
	// this->_charScalar =tmp;
	if (str.length() != 1)
		this->_isPossible = false;
	else if (str.at(0) > 32 || str.at(0) < 127)
		this->_isDisplayable = false;
	else
		this->_charScalar = str.at(0);
	// const char *p = str.c_str();

    // errno = 0;
    // char* p_end;
    // const long i = std::strtol(p, &p_end, 10);
	// if (p == p_end)
	// {
	// 	this->_isPossible = false;
	// 	return ;
	// }
	// const bool range_error = errno == ERANGE;
}

CharType::CharType(CharType const & copy)
{
	*this = copy;
}

CharType const & CharType::operator=(CharType const & rhs)
{
	if (this == &rhs)
		return *this;

	this->_charScalar = rhs._charScalar;
	this->_isDisplayable = rhs._isDisplayable;
	this->_isPossible = rhs._isPossible;
	return *this;
}

CharType::~CharType()
{
}

bool CharType::isDisplayable() const
{
	return this->_isDisplayable;
}

bool CharType::isPossible() const
{
	return this->_isPossible;
}

char CharType::getCharScalar() const
{
	return this->_charScalar;
}

std::ostream & operator<<(std::ostream & os, const CharType & obj)
{
	os << "char: ";
	if (obj.isPossible() == false)
		os << "Not Displayable";
	else if (obj.isDisplayable() == false)
		os << "Impossible";
	else
		os << '\'' << obj.getCharScalar() << '\'';
	return os;
}