#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal object created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal object destroyed" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Unknown Animal voices!!" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}

Animal::Animal( Animal const & copy )
{
        std::cout << "Copy constructor for Animal is called" << std::endl;
        *this = copy;
}

Animal  const & Animal::operator=( Animal const & rhs )
{
        std::cout << "assignment operator for Animal called" << std::endl;
		if (this == &rhs)
			return *this;
		this->type = rhs.type;
        return *this;
}
