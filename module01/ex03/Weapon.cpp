#include "Weapon.hpp"  
	
Weapon::Weapon() {
	std::cout << "New weapon created" << std::endl;
}
	
Weapon::~Weapon() {
	std::cout << "Weapon of type " << '[' << _type << ']' << " destroyed" << std::endl;
}

Weapon::Weapon(const std::string type) :_type(type) {
	std::cout << "A Weapon of type " << '[' << _type << ']' << " has been created" << std::endl;
}

const std::string&	Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(std::string const type) {
	std::cout << '[' << this->_type << ']';
	this->_type = type;
	std::cout << " => " << '[' << this->_type << ']' << std::endl;

}
