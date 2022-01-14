#include "Karen.hpp"

int main(int ac, char **av) {

	if (ac == 2) {
		Karen 		karen;
		std::string	level(av[1]);

		karen.complain(level);
	}
	else {
		std::cerr << "Error: Number of parameters is not correct" << std::endl;
		return 1;
	}
}
