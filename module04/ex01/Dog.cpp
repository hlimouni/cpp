#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Animal of type '" << this->type << "' is created" << std::endl;
}

Dog::Dog( Dog const & copy ) : Animal(copy)
{
        std::cout << "Copy constructor for Dog is called" << std::endl;
		this->_brain = new Brain();
        *this = copy;
}

Dog  const & Dog::operator=( Dog const & rhs )
{
        std::cout << "assignment operator for Dog called" << std::endl;
		this->type = rhs.type;
		*this->_brain = *rhs._brain;
        return *this;
}

Dog::~Dog()
{
	std::cout << "Animal of type '" << this->type << "' has been destroyed" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf! WoufWouf!!" << std::endl;
}

const Brain & Dog::getBrain()
{
	return *this->_brain;
}