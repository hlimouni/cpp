#include "StringRepresentation.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: One and only one argument can be used!!" << '\n';
		return 1;
	}

	std::string input(av[1]);

	StringRepresentation conversion;
	if (StringRepresentation::isInt(input))
		conversion.intConversion(input);
	else if (input.back() == 'f'
		&& StringRepresentation::isFloat(input.substr(0, input.size() - 1)))
		conversion.floatConversion(input);
	else if (StringRepresentation::isDouble(input))
		conversion.doubleConversion(input);
	
	conversion.represent();
	return 0;
}