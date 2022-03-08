#ifndef __ITER_HPP
#define __ITER_HPP

#include <iostream>

template <typename T>
void	printElement(T const & element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	iter(T *arr, size_t len, void (*func)(T const & element))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif