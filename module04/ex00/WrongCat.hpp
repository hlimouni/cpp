#ifndef __WRONGCAT_HPP
#define __WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(WrongCat const & copy);
	WrongCat const & operator=(WrongCat const & rhs);
	~WrongCat();
	void	makeSound() const;
};



#endif