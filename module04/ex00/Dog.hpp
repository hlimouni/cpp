#ifndef __DOG_HPP
#define __DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog const & copy);
	Dog const & operator=(Dog const & rhs);
	~Dog();
	virtual void	makeSound() const;
};



#endif