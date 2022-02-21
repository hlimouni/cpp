#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed const &  Fixed::operator = ( const Fixed& rhs ) {
	std::cout << "Copy assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
