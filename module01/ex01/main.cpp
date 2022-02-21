#include "Zombie.hpp"
#define HORDNUM 5

Zombie* zombieHorde( int N, std::string name );

int main() {

	Zombie* horde = zombieHorde(HORDNUM, "Eren");

	if (!horde) {
		std::cout << "Failed to create horde!!" << std::endl;
		return 1;
	}
	for (size_t i = 0; i < HORDNUM; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}