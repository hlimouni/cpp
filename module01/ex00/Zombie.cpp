#include "Zombie.hpp"


Zombie::Zombie() {
	std::cout << "A Zombie has been raised from the dead" << std::endl;
}

Zombie::Zombie( std::string name ) :_name(name) {
	std::cout << "The Zombie named '" << _name
			  << "' has been raised from the dead" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "The Zombie '" << _name
			  << "' has left us RIP :'( " << std::endl;
}
