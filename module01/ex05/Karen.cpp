#include "Karen.hpp"  
	
Karen::Karen() {
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

void Karen::complain( std::string level ) {

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen::levels levelsFunArray[] = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};
	size_t 		index;
	
	for (size_t i = 0; i < 4; i++) {
		if (levels[i] == level)
			index = i;
	}
	std::cout << "[ " << level << " ]" << std::endl;
	(this->*levelsFunArray[index])();
	std::cout << std::endl;
}
