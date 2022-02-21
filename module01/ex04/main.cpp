#include <iostream>
#include <fstream>
#include <iomanip>

int main(int ac, char **av) {

	if (ac == 4) {
	
		std::string   fileName(av[1]);
		std::string   s1(av[2]);
		std::string   s2(av[3]);
		std::ifstream ifs(fileName);

		if (!ifs.is_open()) {
			std::cerr << "Error: " << std::strerror(errno) << std::endl;
			return 1;
		}

		std::ofstream ofs(fileName + ".replace");
		std::string   line;

		while (std::getline(ifs, line)) {
			while (true) {
				size_t pos = line.find(s1);

				if (pos != std::string::npos) {
					line = line.substr(0, pos) + s2
							+ line.substr(pos + s1.length());
				}
				else
					break ;
			}
			ofs << line << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	else {
		std::cerr << "Error: Number of arguments is not correct!" << std::endl;
		return 1;
	}
	return 0;
}
