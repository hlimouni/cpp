#include "HumanA.hpp"

HumanA::HumanA(const std::string name,Weapon& weapon) : _weapon(weapon), _name(name) {
	std::cout << "A human of type A was given the name "
			  << name << " and was equiped with the weapon "
			  << '[' << _weapon.getType() << ']' << std::endl;
}

HumanA::HumanA(Weapon &weapon) : _weapon(weapon) {
	std::cout << "A human of type A equiped with the weapon "
			  << '[' << _weapon.getType() << ']' << " is born" << std::endl;
}
	
HumanA::~HumanA() {
	std::cout << "A human of type A is dead" << std::endl;
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with his " << '[' << _weapon.getType() << ']' << std::endl;
}