#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Animal of type '" << this->type << "' is created" << std::endl;
}

WrongCat::WrongCat( WrongCat const & copy ) : WrongAnimal(copy)
{
        std::cout << "Copy constructor for WrongCat is called" << std::endl;
        *this = copy;
}

WrongCat  const & WrongCat::operator=( WrongCat const & rhs )
{
        std::cout << "assignment operator for WrongCat called" << std::endl;
		this->type = rhs.type;
        return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Animal of type '" << this->type << "' has been destroyed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meeeeaaaaaaoooo!!" << std::endl;
}