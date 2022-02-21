#include "HumanB.hpp"

HumanB::HumanB() {
	std::cout << "A human of type B was born" << std::endl;
}

void	HumanB::setWeapon(Weapon & weapon) {
	this->_weapon = &weapon;
	std::cout << "Human of type B named " << this->_name << " was equiped with the weapon [" << this->_weapon->getType() << ']' << std::endl;
}

HumanB::HumanB(std::string const name) :_weapon(), _name(name) {
	std::cout << "A human of type B was given the name "
			  << this->_name << std::endl;
}
	
HumanB::~HumanB() {
std::cout << "A human of type A named '" << this->_name << "' and equiped with the weapon "
			  << '[' << this->_weapon->getType() << ']' << " is dead" << std::endl;
}

void	HumanB::attack() const {
	std::cout << std::endl;
	std::cout << this->_name << " attacks with their "
			  << this->_weapon->getType() << std::endl;
	std::cout << std::endl;
}
