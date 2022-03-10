#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(-2);
	vec.push_back(10);

	std::cout << "vec( ";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << ")\n\n";
	
	std::cout << "checking if the value 8 exists in the vector" << std::endl;
	if (easyfind(vec, 8))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "\nchecking if the value -2 exists in the vector" << std::endl;
	if (easyfind(vec, -2))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return 0;
}