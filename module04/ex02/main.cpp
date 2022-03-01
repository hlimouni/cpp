#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//declaring and filling the array
	AAnimal* AAnimals[6] = {};
	for (size_t i = 0; i < 3; i++)
	{
		AAnimals[i] = new Cat();
	}
	for (size_t i = 3; i < 6; i++)
	{
		AAnimals[i] = new Dog();
	}
	//calling makesound() for each object
	std::cout << std::endl;
	for (size_t i = 0; i < 6; i++)
	{
		AAnimals[i]->makeSound();
	}
	std::cout << std::endl;
	//deleting all AAnimals
	for (size_t i = 0; i < 6; i++)
	{
		delete AAnimals[i];
	}
	std::cout << std::endl;
	//testing deep copies
	Dog chiwawa ;
	Brain aaa ;
	std::string copy[100] = {"A", "B", "C"};
	aaa.setIdeas(copy);
	chiwawa.setBrain(aaa);
	chiwawa.getBrain().printIdeas();
	{
		Dog wo(chiwawa);
		wo.getBrain().printIdeas();
	}
	chiwawa.getBrain().printIdeas();
	//compile error if we run this test
	// AAnimal wrongAAnimal;
	return 0;
}
