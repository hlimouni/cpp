#ifndef __DOG_HPP
#define __DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
	Brain* _brain;

public:
	Dog();
	Dog(Dog const & copy);
	Dog const & operator=(Dog const & rhs);
	~Dog();

	virtual void	makeSound() const;
	const Brain &   getBrain();
};



#endif