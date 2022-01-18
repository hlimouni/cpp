#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					_rawBits;
	static const int	_fracBits = 8;

public:

	Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int numInt);
	Fixed(const float numFloat);

	const Fixed& operator=(const Fixed& fixed);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator>(const Fixed& rhs) const;
	bool operator<(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	Fixed operator+(const Fixed& rhs) const;
	Fixed operator-(const Fixed& rhs) const;
	Fixed operator*(const Fixed& rhs) const;
	Fixed operator/(const Fixed& rhs) const;

	Fixed& operator++(); // prefix has no parameter
    Fixed& operator--(); // prefix has no paramFixed
    Fixed operator++(int); // postfix has an int parameter
    Fixed operator--(int); // postfix has an int parameter

	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);

	~Fixed();
};

	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif