#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal object created" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal object destroyed" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "Unknown AAnimal voices!!" << std::endl;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

AAnimal::AAnimal( AAnimal const & copy )
{
        std::cout << "Copy constructor for AAnimal is called" << std::endl;
        *this = copy;
}

AAnimal  const & AAnimal::operator=( AAnimal const & rhs )
{
        std::cout << "assignment operator for AAnimal called" << std::endl;
		this->type = rhs.type;
        return *this;
}
