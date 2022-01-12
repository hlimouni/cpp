#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {
	Zombie*	zombie_ptr = newZombie("Kabbour");

	zombie_ptr->announce();
	randomChump("7ammou");
	delete(zombie_ptr);
}