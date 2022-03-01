#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Uncategorized WrongAnimal")
{
	std::cout << "WrongAnimal object created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal object destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "$@@#@#%@#$+_)*&*^&%^$%^$#$!!!!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal::WrongAnimal( WrongAnimal const & copy )
{
        std::cout << "Copy constructor for WrongAnimal is called" << std::endl;
        *this = copy;
}

WrongAnimal  const & WrongAnimal::operator=( WrongAnimal const & rhs )
{
        std::cout << "assignment operator for WrongAnimal called" << std::endl;
		this->type = rhs.type;
        return *this;
}
