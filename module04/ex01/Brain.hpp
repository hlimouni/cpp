#ifndef __BRAIN_HPP
#define __BRAIN_HPP

#include <iostream>

class Brain
{

private:
	std::string _ideas[100];

public:
	Brain();
	Brain(Brain const & copy);
	Brain const & operator=(Brain const & rhs);
	virtual ~Brain();

	void printIdeas() const;
	void setIdeas(std::string copy[100]);
};

#endif