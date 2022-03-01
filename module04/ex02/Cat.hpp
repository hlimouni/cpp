#ifndef __CAT_HPP
#define __CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

private:
	Brain* _brain;

public:
	Cat();
	Cat(Cat const & copy);
	Cat const & operator=(Cat const & rhs);
	~Cat();
	virtual void	makeSound() const;
};



#endif