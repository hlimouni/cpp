#ifndef __CAT_HPP
#define __CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat const & copy);
	Cat const & operator=(Cat const & rhs);
	~Cat();
	virtual void	makeSound() const;
};



#endif