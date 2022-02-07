#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP

#include <iostream>

class Animal
{

protected:

	std::string	type;

public:

	Animal();
	Animal(Animal const & copy);
	Animal const & operator=(Animal const & rhs);
	virtual ~Animal();
	
	virtual void makeSound() const = 0;
	std::string	getType() const;

};

#endif