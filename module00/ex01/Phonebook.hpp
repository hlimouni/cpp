#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{

private:

	Contact      _phonebook[8];
	const int	 _max;
	int          _number_of_contacts;

public:
	Phonebook();
	~Phonebook() {};
	int			   size() const;
	void           add_contact(Contact& contact);
	const Contact& get_contact(int index) const;
	void		   print_all() const;

};

#endif