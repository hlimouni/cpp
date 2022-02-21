#include "Weapon.hpp"  
	
Weapon::Weapon() {
	std::cout << "New weapon created" << std::endl;
}
	
Weapon::~Weapon() {
	std::cout << "Weapon of type "  << '[' << this->_type << ']' << " destroyed\n" << std::endl;
}

Weapon::Weapon(std::string const type) :_type(type) {
	std::cout << "A Weapon of type " <<  '[' << this->_type << ']' << " has been created" << std::endl;
}

std::string const &	Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(std::string const type) {
	std::cout << '[' << this->_type << ']';
	this->_type = type;
	std::cout << " <-- " << '[' << this->_type << ']' << std::endl;

}
