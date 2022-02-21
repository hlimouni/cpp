#include "Karen.hpp"

int main(int ac, char **av) {

	if (ac == 2) {
		// std::string	level(av[1]);
		Karen 		karen;

		karen.complain(av[1]);
	}
	else {
		std::cerr << "Error: Number of parameters is not correct" << std::endl;
		return 1;
	}
}
