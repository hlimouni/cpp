#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( const int numInt ) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = numInt << Fixed::_fracBits;
}

// ********************************************************************** //
// fixed point numbers are represented in memory as						  //
// regular integers muliplied by 2 ^ fractBits (shifted to the left by 8) //
//																		  //
// for example in frac<4, 2> (4 bits, 2 fracBits)                         //
// the value 1:															  //
// 		as int          [0 0 0 1]										  //
// 		as fixed point [0 1 0 0]										  //
// so fixedValue = intValue * 2 ^ 2										  //
//                                         1 << 8 = 2 ^ 8				  //
// ********************************************************************** //

Fixed::Fixed( const float numFloat) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(numFloat * (1 << Fixed::_fracBits));
}

const Fixed& Fixed::operator=( const Fixed& fixed ) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return *this;
	this->_rawBits = fixed._rawBits;
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

int Fixed::toInt( void ) const {
	return (this->_rawBits >> Fixed::_fracBits);
}

float Fixed::toFloat( void ) const {
	return (static_cast<float>(this->_rawBits) / (1 << Fixed::_fracBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
