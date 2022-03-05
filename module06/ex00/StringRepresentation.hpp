#ifndef STRINGREPRESENTATION_HPP
#define STRINGREPRESENTATION_HPP

#include <iostream>
#include <iomanip>

class StringRepresentation
{

private:
	std::string _type;
	char _charType;
	int _intType;
	float _floatType;
	double _doubleType;

	bool _isCharPossible;
	bool _isCharDisplayable;
	bool _isIntPossible;
	bool _isFloatPossible;
	bool _isDoublePossible;

public:
	StringRepresentation();
    StringRepresentation(std::string const str);
    StringRepresentation(std::string const str, std::string const type);
	StringRepresentation(StringRepresentation const & copy);
	StringRepresentation const & operator=(StringRepresentation const & rhs);
    ~StringRepresentation();

	void intConversion(const std::string &);
	void floatConversion(const std::string &);
	void doubleConversion(const std::string &);

	void represent() const;

	static bool isInt(const std::string str);
	static bool isFloat(const std::string str);
	static bool isDouble(const std::string str);
};

#endif