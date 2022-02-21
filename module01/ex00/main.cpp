#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {
	Zombie*	zombie_ptr = newZombie("Annie Lenonhardt");

	if (!zombie_ptr)
	{
		std::cout << "Failed to create new Zombie" << std::endl;
		return 1;
	}
	zombie_ptr->announce();
	delete(zombie_ptr);
	randomChump("Zeke Yeager");
}