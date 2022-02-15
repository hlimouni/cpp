#include "Phonebook.hpp"

Phonebook::Phonebook() : _max(8), _number_of_contacts(0) {}

void	Phonebook::add_contact(Contact &contact) {

	if (_number_of_contacts < _max) {
		_phonebook[_number_of_contacts].replace_with(contact);
		_number_of_contacts++;
	}
	else {
		for (int i = 0; i < _max - 1; i++) {
			_phonebook[i].replace_with(_phonebook[i + 1]);
		}
		_phonebook[_max - 1].replace_with(contact);
	}
}

const Contact&	Phonebook::get_contact(int index) const {
	return (_phonebook[index]);
}

void		   Phonebook::print_all() const {
	for (int i = 0; i < _number_of_contacts; i++)
		_phonebook[i].print_full_name(i + 1);
}

int			   Phonebook::size() const {
	return (_number_of_contacts);
}
