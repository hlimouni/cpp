#include "StringRepresentation.hpp"

StringRepresentation::StringRepresentation()
	:
	_isCharPossible(false),
	_isCharDisplayable(false),
	_isIntPossible(false),
	_isFloatPossible(false),
	_isDoublePossible(false)
{
}

void	StringRepresentation::represent() const
{
	std::cout << "char: ";
	if (this->_isCharPossible)
	{
		if (this->_isCharDisplayable)
			std::cout << '\'' << static_cast<char>(this->_intType) << '\'' << '\n';
		else
			std::cout << "Non Displayable\n";
	}
	else
		std::cout << "Impossible\n";
	
	std::cout << "int: ";
	if (this->_isIntPossible)
		std::cout << this->_intType << '\n';
	else
		std::cout << "Impossible\n";
	
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: ";
	if (this->_isFloatPossible)
		std::cout << this->_floatType << 'f' << '\n';
	else
		std::cout << "Impossible\n";
	
	std::cout << "double: ";
	if (this->_isDoublePossible)
		std::cout << this->_doubleType << '\n';
	else
		std::cout << "Impossible\n";
}

void StringRepresentation::intConversion(std::string const & str)
{
	if (isInt(str))
	{
		this->_isIntPossible = true;
		this->_intType = atoi(str.c_str());
		if ((str.length() == 1)|| (_intType <= CHAR_MAX && _intType >= CHAR_MIN))
		{
			this->_isCharPossible = true;
			if (str.length() == 1 && !isdigit(str.front()))
				this->_intType = str.front();
			this->_charType = static_cast<char>(_intType);
			if (_intType >= 32 && _intType < 127)
				this->_isCharDisplayable = true;
		}
		this->_isFloatPossible = true;
		this->_isDoublePossible = true;
		this->_floatType = static_cast<float>(this->_intType);
		this->_doubleType = static_cast<double>(this->_intType);
	}
}

void StringRepresentation::floatConversion(std::string const & str)
{
	std::string rawStr = str.substr(0, str.size() - 1);
	
	if (isFloat(rawStr))
	{
		char *p_end;

		this->_isFloatPossible = true;
		this->_isDoublePossible = true;
		this->_floatType = strtof(rawStr.c_str(), &p_end);
		this->_doubleType = static_cast<double>(this->_floatType);
		if (this->_floatType >= INT_MIN && this->_floatType <= INT_MAX)
		{
			this->_isIntPossible = true;
			this->_intType = static_cast<int>(this->_floatType);
			if (_intType <= CHAR_MAX && _intType >= CHAR_MIN)
			{
				this->_isCharPossible = true;
				this->_charType = static_cast<char>(_intType);
				if (_intType >= 32 && _intType < 127)
					this->_isCharDisplayable = true;
			}
		}
	}
}

void StringRepresentation::doubleConversion(std::string const & str)
{
	if (isDouble(str))
	{
		char *p_end;

		this->_isDoublePossible = true;
		this->_doubleType = strtod(str.c_str(), &p_end);
		if (isFloat(str))
		{
			this->_isFloatPossible = true;
			this->_floatType = static_cast<float>(this->_doubleType);
			if (this->_doubleType >= INT_MIN && this->_doubleType <= INT_MAX)
			{
				this->_isIntPossible = true;
				this->_intType = static_cast<int>(this->_doubleType);
				if (_intType <= CHAR_MAX && _intType >= CHAR_MIN)
				{
					this->_isCharPossible = true;
					this->_charType = static_cast<char>(_intType);
					if (_intType >= 32 && _intType < 127)
						this->_isCharDisplayable = true;
				}
			}
		}
	}
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

bool StringRepresentation::isInt(const std::string str)
{
	if (str.length() == 1)
		return true;

	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtol(p, &p_end, 10);
	if (p == p_end || static_cast<size_t>(p_end - p) < str.length()
		|| errno == ERANGE || i > INT_MAX || i < INT_MIN)
		return false;
	return true;
}

bool StringRepresentation::isFloat(const std::string str)
{
	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    std::strtof(p, &p_end);
	if (p == p_end || static_cast<size_t>(p_end - p) < str.length()
		|| errno == ERANGE)
		return false;
	return true;
}

bool StringRepresentation::isDouble(const std::string str)
{
	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    std::strtod(p, &p_end);
	if (p == p_end || static_cast<size_t>(p_end - p) < str.length()
		|| errno == ERANGE)
		return false;
	return true;
}

StringRepresentation::~StringRepresentation()
{
}