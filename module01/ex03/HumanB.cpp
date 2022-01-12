#include "HumanB.hpp"

HumanB::HumanB() {
	std::cout << "A human of type B was born" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

HumanB::HumanB(const std::string name) : _name(name) {
	_weapon = NULL;
	std::cout << "A human of type A was given the name "
			  << _name << std::endl;
}
	
HumanB::~HumanB() {
	std::cout << "A human of type A is dead" << std::endl;
}

void	HumanB::attack() const {
	std::cout << _name << " attacks with his "
			  << '[' << _weapon->getType() << ']' << std::endl;
}