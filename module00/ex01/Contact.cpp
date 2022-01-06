#include "Contact.hpp"

Contact::Contact(
	std::string f1,
	std::string f2,
	std::string f3,
	std::string f4,
	std::string f5
	)
	: _width(10),
	  _first_name(f1),
	  _last_name(f2),
	  _nick_name(f3),
	  _phone_num(f4),
	  _darkest_secret(f5) {
		_data[0] = _first_name;
		_data[1] = _last_name;
		_data[2] = _nick_name;
		_data[3] = _phone_num;
		_data[4] = _darkest_secret;
	}

std::string	Contact::get_first_name() const {
	return this->_first_name;
}

std::string Contact::get_last_name() const {
	return this->_last_name;
}

std::string Contact::get_nick_name() const {
	return this->_nick_name;
}

std::string Contact::get_phone_num() const {
	return this->_phone_num;
}

std::string Contact::get_darkest_secret() const {
	return this->_darkest_secret;
}

void	Contact::set_first_name(std::string first_name) {
	this->_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name) {
	this->_last_name = last_name;
}

void	Contact::set_nick_name(std::string nick_name) {
	this->_nick_name = nick_name;
}

void	Contact::set_phone_num(std::string phone_num) {
	this->_phone_num = phone_num;
}

void	Contact::set_darkest_secret(std::string darkest_secrect) {
	this->_darkest_secret = darkest_secrect;
}

void	Contact::print_full_name(int index) const {

	std::cout << '|' << std::right << std::setw(_width) << index;
	for (int i = 0; i < 3; i++) {

		std::cout << '|';
		if (_data[i].length() > _width) {
			std::cout << _data[i].substr(0, _width - 1) << '.';
		}
		else {
			std::cout << std::right << std::setw(_width) << _data[i];
		}
	}
	std::cout << "|\n";
}

void	Contact::replace_with(Contact &contact) {
	this->_first_name = contact._first_name;
	this->_last_name = contact._last_name;
	this->_nick_name = contact._nick_name;
	this->_phone_num = contact._phone_num;
	this->_darkest_secret = contact._darkest_secret;
	for (size_t i = 0; i < 5; i++) {
		this->_data[i] = contact._data[i];
	}
}

void	Contact::print_info() const {
	for (int i = 0; i < 5; i++) {
		if (!_data[i].empty())
			std::cout << _data[i] << '\n';
	}
}

Contact::Contact() : _width(10){}

Contact::Contact(std::string fields[5])
	: _width(10),
	  _first_name(fields[0]),
	  _last_name(fields[1]),
	  _nick_name(fields[2]),
	  _phone_num(fields[3]),
	  _darkest_secret(fields[4]) {
		_data[0] = _first_name;
		_data[1] = _last_name;
		_data[2] = _nick_name;
		_data[3] = _phone_num;
		_data[4] = _darkest_secret;
}
// int main() 
// {
// 	Contact contact {"blllllalkjlksj", "lklkjlkjlkjlkjl",
// 		"lkjlksjdflkjsldfkj", "lkjlskdjflksjdflkj", "lkjls"};
// 	Contact contact2 {"123456789012","1","123456789","1234567890", ""};
// 	Contact contact3;
	
// 	contact.print_full_name(0);
// 	contact2.print_full_name(1);
// 	contact3.print_full_name(55);
// }