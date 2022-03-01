#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//declaring and filling the array
	Animal* animals[6] = {};
	for (size_t i = 0; i < 3; i++)
	{
		animals[i] = new Cat();
	}
	for (size_t i = 3; i < 6; i++)
	{
		animals[i] = new Dog();
	}

	//calling makesound() for each object
	std::cout << std::endl;
	for (size_t i = 0; i < 6; i++)
	{
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	//deleting all animals
	for (size_t i = 0; i < 6; i++)
	{
		delete animals[i];
	}
	std::cout << std::endl;
	//testing deep copies
	Dog chiwawa ;
	Brain aaa ;
	Cat bisbis;
	Cat psps = bisbis;
	std::string copy[100] = {"A", "B", "C"};
	aaa.setIdeas(copy);
	chiwawa.setBrain(aaa);
	chiwawa.getBrain().printIdeas();
	{
		Dog wo(chiwawa);
		wo.getBrain().printIdeas();
	}
	chiwawa.getBrain().printIdeas();
	return 0;
}
