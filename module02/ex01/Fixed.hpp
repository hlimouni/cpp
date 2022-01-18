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

	~Fixed();
};

	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif