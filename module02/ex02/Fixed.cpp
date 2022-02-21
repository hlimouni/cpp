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
	this->_rawBits = numInt <<  Fixed::_fracBits;
}

// ******************************************************************************** //
//																		  		    //
// fixed point numbers are represented in memory as						  		    //
// regular numbers muliplied by 2 ^ fractBits (shifted to the left by 8)  		    //
//																		  		    //
// for example in frac<4, 2> (4 bits, 2 fracBits)                         		    //
// the value 1:															  		    //
// 		as actual int value         [0 0 0 1]							  		    //
// 		as fixed point raw bits		[0 1 0 0]							  		    //
// so fixedRawBits = actualValue * 2 ^ 2					(1)					    //
// and actualValue = fixedRawBits / 2 ^ 2									        //
//																		            //
//                         1 << fracBits =  1 << 8 = 2 ^ 8				            //
//																		            //
// In addition and substraction it's straight forward:                              //
// fixedRawBits1 + fixedRawBits2 = (actualValue1 + actualValue2) * 2 ^ 2            //
// fixedRawBits1 - fixedRawBits2 = (actualValue1 - actualValue2) * 2 ^ 2            //
//																		            //
// But in multiplication and division not so:									    //
// if we multiply the raw bits directly we don't get the desired result             //
//																		            //
// from (1) fixedRawbits1 * fixedRawBits2 = actualValue1 * actualValue2 * 2 ^ 4     //
//																		            //
// We want the raw bits to equal    (actualProduct) * 2 ^ 2                         //
//																		            //
// (fixedRawBits1 * fixedRawBits2) / 2 ^ 2 = (actualValue1 * actualValue2) * 2 ^ 2  //
// (fixedRawBits1 / fixedRawBits2) * 2 ^ 2 = (actualValue1 / actualValue2) * 2 ^ 2  //
// ******************************************************************************** //

Fixed::Fixed( const float numFloat) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(numFloat * (1 << Fixed::_fracBits));
}

const Fixed& Fixed::operator=( const Fixed& fixed ) {
	std::cout << "Assignation operator called" << std::endl;
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

bool Fixed::operator==(const Fixed& rhs) const {
	return (this->_rawBits == rhs._rawBits);
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return (this->_rawBits != rhs._rawBits);
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return (this->_rawBits >= rhs._rawBits);
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return (this->_rawBits <= rhs._rawBits);
}

bool Fixed::operator>(const Fixed& rhs) const {
	return (this->_rawBits > rhs._rawBits);
}

bool Fixed::operator<(const Fixed& rhs) const {
	return (this->_rawBits < rhs._rawBits);
}

Fixed Fixed::operator+(const Fixed& rhs) const {
	Fixed sum;

	sum.setRawBits(this->_rawBits + rhs._rawBits);
	return sum;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
	Fixed diff;

	diff.setRawBits(this->_rawBits - rhs._rawBits);
	return diff;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	Fixed prod;

	prod.setRawBits((this->_rawBits * rhs._rawBits) >> Fixed::_fracBits);
	return prod;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
	Fixed div;

	div.setRawBits((this->_rawBits * rhs._rawBits) << Fixed::_fracBits);
	return div;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a > b ? b : a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	return (a > b ? b : a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b ? a : b);
}

Fixed& Fixed::operator++() {
	++_rawBits;
	return *this;
}

Fixed& Fixed::operator--() {
	--_rawBits;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return temp;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
