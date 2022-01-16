#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:

	int					_rawBits;
	static const int	_fracBits = 8;

public:

	Fixed();
	Fixed(const Fixed& copy);
	void operator = (const Fixed& fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	~Fixed();
};



#endif