#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = copy.getRawBits();
}

void Fixed::operator = ( const Fixed& fixed ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = fixed.getRawBits();
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
