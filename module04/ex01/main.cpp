#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animals[6];
	for (size_t i = 0; i < 3; i++)
	{
		animals[i] = new Cat();
	}
	for (size_t i = 3; i < 6; i++)
	{
		animals[i] = new Dog();
	}

	for (size_t i = 0; i < 6; i++)
	{
		delete animals[i];
	}
	Dog hh ;
	Brain aaa = hh.getBrain();
	std::string copy[100] = {"A", "B", "C"};
	aaa.setIdeas(copy);
	aaa.printIdeas();
	Dog j;
	j = hh;
	j.getBrain().printIdeas();
	return 0;
}
