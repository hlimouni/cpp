#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t serial = reinterpret_cast<uintptr_t>(ptr);
	return (serial);
}

Data* deserialize(uintptr_t raw)
{
	Data *dataPtr = reinterpret_cast<Data*>(raw);
	return (dataPtr);
}

int main()
{
	Data		data;
	uintptr_t	uIntPtr;

	data.c = 'F';
	std::cout << "data Address : " << &data << std::endl;
	std::cout << "data Content : " << data.c << std::endl;

	uIntPtr = serialize(&data);
	std::cout << "data address casted to uintptr_t is : " << std::hex << uIntPtr << std::endl;

	Data *aDataPtr; 
	aDataPtr = deserialize(uIntPtr);
	std::cout << "Cast uintptr_t back to Data pointer: ";
	std::cout << aDataPtr << std::endl;

	std::cout << "Value of the first element in data : ";
	std::cout << aDataPtr->c << std::endl;
}