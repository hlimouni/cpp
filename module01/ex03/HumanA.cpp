#include "HumanA.hpp"

HumanA::HumanA(std::string const name,Weapon & weapon) : _weapon(weapon), _name(name) {
	std::cout << "A human of type A was given the name '"
			  << name << "' and was equiped with the weapon "
			  << '[' << this->_weapon.getType() << ']' << std::endl;
}

HumanA::HumanA(Weapon & weapon) : _weapon(weapon) {
	std::cout << "A human of type A equiped with the weapon "
			  << '[' << this->_weapon.getType() << ']' << " is born" << std::endl;
}
	
HumanA::~HumanA() {
std::cout << "A human of type A named '" << this->_name << "' and equiped with the weapon "
			  << '[' << this->_weapon.getType() << ']' << " is dead" << std::endl;
}

void	HumanA::attack() const {
	std::cout << std::endl;
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	std::cout << std::endl;
}
