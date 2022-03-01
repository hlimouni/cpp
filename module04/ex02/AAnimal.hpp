#ifndef __AAnimal_HPP
#define __AAnimal_HPP

#include <iostream>

class AAnimal
{

protected:

	std::string	type;

public:

	AAnimal();
	AAnimal(AAnimal const & copy);
	AAnimal const & operator=(AAnimal const & rhs);
	virtual ~AAnimal();
	
	virtual void makeSound() const = 0;
	std::string	getType() const;

};

#endif