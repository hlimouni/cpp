#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie*	horde = new(std::nothrow) Zombie[N];

	if (!horde)
		return NULL;
	for (int i = 0; i < N; i++) {
		horde[i].giveName(name);
	}
	return horde;
}
