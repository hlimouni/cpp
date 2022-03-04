#include "StringRepresentation.h"

StringRepresentation::StringRepresentation()
{
}

StringRepresentation::StringRepresentation(std::string const str, std::string const type)
	:
	_isCharPossible(false),
	_isCharDisplayable(false),
	_isIntPossible(false),
	_isFloatPossible(false),
	_isDoublePossible(false)
{
	if (type == "integer")
		intConversion(str);
	else if (type == "float")
		floatConversion(str);
	else if (type == "double")
		doubleConversion(str);
}

void StringRepresentation::intConversion(std::string const & str)
{
	if (isInt(str))
	{
		this->_isIntPossible = true;
		this->_intType = atoi(str.c_str());
		if (str.length() == 1 && str.front() <= CHAR_MAX && str.front() >= 0)
		{
			this->_isCharPossible = true;
			this->_charType = this->_intType;
			if (str.front() > 31)
				this->_isCharDisplayable = true;
		}
		this->_isFloatPossible = true;
		this->_isDoublePossible = true;
		this->_floatType = this->_intType;
		this->_doubleType = this->_intType;
	}
}

void StringRepresentation::floatConversion(std::string const & str)
{
	if (isFloat(str))
	{
		char *p_end;

		this->_isFloatPossible = true;
		this->_isDoublePossible = true;
		this->_floatType = strtof(str.c_str(), &p_end);
		this->_doubleType = this->_floatType;
		if (this->_floatType >= INT_MIN && this->_floatType <= INT_MAX)
		{
			this->_isIntPossible = true;
			this->_intType = static_cast<int>(this->_floatType);
		}
	}
}

StringRepresentation::StringRepresentation()
{
}

StringRepresentation::StringRepresentation(StringRepresentation const & copy)
{
	*this = copy;
}

StringRepresentation const & StringRepresentation::operator=(StringRepresentation const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_charType = rhs._charType;
	this->_doubleType = rhs._doubleType;
	this->_floatType = rhs._floatType;
	this->_intType = rhs._intType;
	return *this;
}

char StringRepresentation::getChar() const
{
	return this->_charType;
}

double StringRepresentation::getDouble() const
{
	return this->_doubleType;
}

float StringRepresentation::getFloat() const
{
	return this->_floatType;
}

int StringRepresentation::getInt() const
{
	return this->_intType;
}

void StringRepresentation::setChar(char charType)
{
	this->_charType = charType;
}

void StringRepresentation::setInt(int intType)
{
	this->_intType = intType;
}

void StringRepresentation::setDouble(double doubleType)
{
	this->_doubleType = doubleType;
}

void StringRepresentation::setFloat(float floatType)
{
	this->_floatType = floatType;
}

StringRepresentation::~StringRepresentation()
{
}

bool isInt(const std::string str)
{
	if (str.length() == 1)
		return true;

	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtol(p, &p_end, 10);
	if (p == p_end || p_end - p < str.length()
		|| errno == ERANGE || i > INT_MAX || i < INT_MIN)
		return false;
	return true;
}

bool isFloat(const std::string str)
{
	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtof(p, &p_end);
	if (p == p_end || p_end - p < str.length()
		|| errno == ERANGE)
		return false;
	return true;
}

bool isDouble(const std::string str)
{
	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtod(p, &p_end);
	if (p == p_end || p_end - p < str.length()
		|| errno == ERANGE)
		return false;
	return true;
}
