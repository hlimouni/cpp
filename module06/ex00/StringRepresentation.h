#ifndef STRINGREPRESENTATION_H
#define STRINGREPRESENTATION_H

#include <iostream>

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

	char getChar() const;
	int  getInt() const;
	float getFloat() const;
	double getDouble() const;

	void setChar(char);
	void setInt(int);
	void setFloat(float);
	void setDouble(double);

	void intConversion(const std::string &);
	void floatConversion(const std::string &);
	void doubleConversion(const std::string &);

	void represent();
};

std::ostream &operator<<(std::ostream & os, const StringRepresentation & obj);

#endif