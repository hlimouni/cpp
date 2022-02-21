#include <iostream>

int main() {
	std::string string("HI THIS IS BRAIN");

	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "String's address: " << &string << std::endl;

	std::cout << "Address of string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of string using stringREF: " << &stringREF << std::endl;

	std::cout << "\nString's value: " << string << std::endl;

	std::cout << "The value pointed by stringPTR is : " << *stringPTR << std::endl;
	std::cout << "The value referenced by stringREF is : " << stringREF << std::endl;
}
