#include "CharType.hpp"

bool isInt(const std::string str)
{
	if (str.length() == 1)
		return true;

	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtol(p, &p_end, 10);
	if (p == p_end || p_end - p < str.length()
		|| errno == ERANGE || i > INT_MAX || i < INT_MIN)
		return false;
	return true;
}

bool isFloat(const std::string str)
{
	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtof(p, &p_end);
	if (p == p_end || p_end - p < str.length()
		|| errno == ERANGE)
		return false;
	return true;
}

bool isDouble(const std::string str)
{
	const char *p = str.c_str();
    errno = 0;
    char* p_end;
    const long i = std::strtod(p, &p_end);
	if (p == p_end || p_end - p < str.length()
		|| errno == ERANGE)
		return false;
	return true;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: One and only one argument can be used!!" << '\n';
		return 1;
	}
	std::string input(av[1]);
	if (
			isInt(input)
			|| input.back() == 'f' && isFloat( input.substr(0, input.size() - 1))
			|| isDouble(input)
		)
	{

	}
	if (isInt(input))
	{
		
	}
}