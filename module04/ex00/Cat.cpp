#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Animal of type '" << this->type << "' is created" << std::endl;
}

Cat::Cat( Cat const & copy ) : Animal(copy)
{
        std::cout << "Copy constructor for Cat is called" << std::endl;
        *this = copy;
}

Cat  const & Cat::operator=( Cat const & rhs )
{
        std::cout << "assignment operator for Cat called" << std::endl;
		this->type = rhs.type;
        return *this;
}

Cat::~Cat()
{
	std::cout << "Animal of type '" << this->type << "' has been destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeeaaaaaaoooo!!" << std::endl;
}