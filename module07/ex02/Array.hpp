#ifndef __ARRAY_HPP
#define __ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		size_t _size;
		T* _data;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array & rhs);
		Array & operator=(const Array & rhs);
		~Array();

		T & operator [] (size_t index) const;

	public:
		size_t size() const;
};

template<typename T>
Array<T>::Array() : _size(), _data()
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_data = new T[n];
}

template<typename T>
Array<T>::Array(const Array & copy) : _size(), _data()
{
	*this = copy;
}

template<typename T>
Array<T> & Array<T>::operator=(const Array & rhs)
{
	if (this != &rhs)
	{
		delete[] this->_data;
		this->_size = rhs._size;
		if (rhs._data != nullptr)
		{
			this->_data = new T[rhs._size];
			for (size_t i = 0; i < rhs._size; i++)
			{
				this->_data[i] = rhs._data[i];
			}
		}
		else
			this->_data = nullptr;
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->_data;
}

template<typename T>
T & Array<T>::operator[](size_t index) const
{
	if (index >= this->_size)
		throw std::runtime_error("Index is out of bounds");
	return this->_data[index];
}

template<typename T>
size_t Array<T>::size() const
{
	return this->_size;
}

#endif
