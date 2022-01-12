#include "Zombie.hpp"


Zombie::Zombie() {
	std::cout << "An unnamed Zombie has been raised from the dead" << std::endl;
}

void Zombie::give_name(std::string name) {
	this->_name = name;
	std::cout << "This Zombie has been named to " << name << std::endl;
}

Zombie::Zombie( std::string name ) :_name(name) {
	std::cout << "The Zombie " << name
			  << " has been raised from the dead" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "The Zombie " << _name
			  << " has left us RIP :'( " << std::endl;
}
