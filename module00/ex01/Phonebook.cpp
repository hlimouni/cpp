#include "Phonebook.hpp"

Phonebook::Phonebook() : _phonebook {}, _max(8), _number_of_contacts(0) {}

void	Phonebook::add_contact(Contact &contact) {
	if (_number_of_contacts < _max)
	{
		_phonebook[_number_of_contacts] = contact;
		_number_of_contacts++;
	}
	else
	{
		for (size_t i = 1; i < _max; i++)
		{
			_phonebook[i] = _phonebook[i - 1];
		}
		_phonebook[_max - 1] = contact;
	}
	
}