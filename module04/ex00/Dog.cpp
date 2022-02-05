#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Animal of type '" << this->type << "' is created" << std::endl;
}

Dog::Dog( Dog const & copy ) : Animal(copy)
{
        std::cout << "Copy constructor for Dog is called" << std::endl;
        *this = copy;
}

Dog  const & Dog::operator=( Dog const & rhs )
{
        std::cout << "assignment operator for Dog called" << std::endl;
		this->type = rhs.type;
        return *this;
}

Dog::~Dog()
{
	std::cout << "Animal of type '" << this->type << "' has been destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf! WoufWouf!!" << std::endl;
}