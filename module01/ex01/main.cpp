#include "Zombie.hpp"
#define HORDNUM 5

Zombie* zombieHorde( int N, std::string name );

int main() {
	Zombie* horde = zombieHorde(HORDNUM, "Lma3ti");
	for (int i = 0; i < HORDNUM; i++) {
		horde[i].announce();
	}
	delete [] horde;
}