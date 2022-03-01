#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << std::endl;
	std::cout << "The object created is of type " << j->getType() << std::endl;
	std::cout << "The object created is of type " << i->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "the " << i->getType() << " said:   " << std::endl;
	 i->makeSound(); // will output the cat sound!
	std::cout << std::endl;
	std::cout << "the " << j->getType() << " said:   " << std::endl;
	 j->makeSound();
	std::cout << std::endl;
	std::cout << "the " << meta->getType() << " said:   " << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	delete meta;

	//wrong example
	std::cout << "\nWrong Example:" << std::endl;
	std::cout <<   "=============\n" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongI = new WrongCat();
	std::cout << std::endl;
	std::cout << "The object created is of type " << wrongMeta->getType() << std::endl;
	std::cout << "The object created is of type " << wrongI->getType() << std::endl;
	std::cout << "the " << wrongI->getType() << " said:   " << std::endl;
	wrongI->makeSound();//will output the animal sound!
	std::cout << std::endl;
	std::cout << "the " << wrongMeta->getType() << " said:   " << std::endl;
	wrongMeta->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	delete wrongMeta;
	delete wrongI;
	return 0;
}
