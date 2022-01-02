#include "Contact.hpp"

Contact::Contact(
	std::string f1,
	std::string f2,
	std::string f3,
	std::string f4,
	std::string f5
	) {
	this->_first_name = f1;
	this->_last_name = f2;
	this->_nick_name = f3;
	this->_phone_num = f4;
	this->_darkest_secret = f5;
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