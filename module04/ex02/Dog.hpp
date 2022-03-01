#ifndef __DOG_HPP
#define __DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
	void			setBrain(Brain brain);
};



#endif