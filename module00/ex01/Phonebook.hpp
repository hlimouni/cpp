#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{

private:

	const size_t _max;
	Contact      _phonebook[8];
	int          _number_of_contacts;

public:
	Phonebook();
	void           add_contact(Contact& contact);
	const Contact& get_contact(size_t index) const;

};

#endif