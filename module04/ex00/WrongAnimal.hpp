#ifndef __WRONGANIMAL_HPP
#define __WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{

protected:

	std::string	type;

public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const & copy);
	WrongAnimal const & operator=(WrongAnimal const & rhs);
	~WrongAnimal();
	
	void makeSound() const;
	std::string	getType() const;

};

#endif