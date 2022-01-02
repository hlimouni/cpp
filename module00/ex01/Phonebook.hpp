#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{

private:

	Contact _phonebook[8] {};

public:
	Phonebook();
	void	add_contact(Contact& contact);

};

#endif