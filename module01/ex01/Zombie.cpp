#include "Zombie.hpp"


Zombie::Zombie() {
	std::cout << "A Zombie has been raised from the dead" << std::endl;
}

void Zombie::giveName(std::string name) {
	this->_name = name;
	std::cout << "The created Zombie has been given the name: " << name << std::endl;
}

Zombie::Zombie( std::string name ) :_name(name) {
	std::cout << "The Zombie '" << name
			  << "' has been raised from the dead" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "The Zombie named '" << _name
			  << "' has left us RIP :'( " << std::endl;
}
