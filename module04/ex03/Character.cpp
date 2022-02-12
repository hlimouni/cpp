#include "Character.hpp"

Character::Character() : _inventory(), _junk()
{
	// std::cout << "Character constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _inventory(), _junk()
{
	// std::cout << "Character named " << this->_name << " is created" << std::endl;
}

Character::~Character()
{
	// std::cout << "Character desctructor called" << std::endl;
	AMateria::removeMaterias(&this->_junk);
	AMateria::removeMaterias(&this->_inventory);
}

void Character::deepCopy(Character const & copy)
{
	AMateria::removeMaterias(&this->_inventory);
	
	this->_name = copy._name;
	for (size_t i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
		{
			this->_inventory[i] = copy._inventory[i]->clone();
		}
		else
		{
			// std::cout << "inventory of idx " << i << " is empty" << std::endl;
		}
	}
}

Character::Character(Character const & copy)
{
	deepCopy(copy);
}

Character const & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		deepCopy(rhs);
	}
	return *this;
}

std::string	const & Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	// Check for junk addresses and delete them before adding new materias
	AMateria::removeMaterias(&this->_junk);
	// Add the materia address on first null materia address
	if (AMateria::addMaterias(m, &this->_inventory) == false)
		delete m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	if (this->_inventory[idx])
	{
		AMateria::addMaterias(this->_inventory[idx], &this->_junk);
		this->_inventory[idx] = NULL;
	}
	else
	{
		// std::cout << "inventory of idx " << idx << " is empty" << std::endl;
	}
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 4)
		return ;
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
	else
	{
		// std::cout << "inventory of idx " << idx << " is empty" << std::endl;
	}
}

