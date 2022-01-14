#include "Karen.hpp"  
	
Karen::Karen() {
	std::string levelsArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i++) {
		this->_levels[i] = levelsArray[i];
	}
	std::cout << "Karen has Entered The Restaurant\n" << std::endl;
}

void Karen::debug( void ) {
	std::cout << "I love to get extra bacon for "
			  << "my 7XL-double-cheese-triple-pickle-special-ketchup burger."
			  << " I just love it!" << std::endl;
}

void Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon cost more money."
			  << " You don’t put enough! If you did I would not have to ask for it!"
			  << std::endl;
}
void Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
			  << "coming here for years and you just started working here last month."
			  << std::endl;
}
void Karen::error( void ) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::~Karen() {
	std::cout << "Karen left the Restaurant" << std::endl;
}


int	Karen::get_level_index(std::string const level) const {

	int i = 0;

	for (i = 0; i < 4; i++) {
		if (this->_levels[i] == level)
			return i;
	}
	return -1;
}

void Karen::complain( std::string level ) {

	Karen::levels levelsFunArray[] = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};

	switch (int indexLevel = get_level_index(level)) {
		case 0: case 1: case 2: case 3:
			std::cout << "[ " << level << " ]" << std::endl;
			(this->*levelsFunArray[indexLevel])();
			std::cout << std::endl;
			std::cout << "[ " << this->_levels[(indexLevel + 1) % 4] << " ]" << std::endl;
			(this->*levelsFunArray[(indexLevel + 1) % 4])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			break ;
	}
}
