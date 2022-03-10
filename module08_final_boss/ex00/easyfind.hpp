#ifndef __EASYFIND_HPP
#define __EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
bool easyfind(T const & container, int number)
{
	if (std::find(container.begin(), container.end(), number) != container.end())
		return true;
	return false;
}

#endif