#ifndef __CAT_HPP
#define __CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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