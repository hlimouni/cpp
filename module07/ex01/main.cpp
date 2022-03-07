#include "iter.hpp"

int main()
{
	int	arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	std::cout << "iterate and print content of int arr :" << std::endl;
	iter(arr, 10, printElement);
	std::cout << std::endl;

	std::string strArr[3] = {"String1", "String2", "String3"};

	std::cout << "iterate and print content of string arr :" << std::endl;
	iter(strArr, 3, printElement);
	return (0);
}
