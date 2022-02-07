#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Brain's copy constructor called" << std::endl;
	*this = copy;
}

Brain const & Brain::operator=(Brain const & rhs)
{
	std::cout << "assignement operator for Brain called" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::printIdeas() const
{
	for (size_t i = 0; i < 100; i++)
	{
		if (!this->_ideas[i].empty())
		{
			std::cout << this->_ideas[i] << std::endl;
		}
	}
}

void	Brain::setIdeas(std::string copy[100])
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = copy[i];
	}
	
}