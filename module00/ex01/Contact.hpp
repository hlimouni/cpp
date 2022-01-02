#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{

private:

	std::string _first_name {};
	std::string _last_name {};
	std::string _nick_name {};
	std::string _phone_num {};
	std::string _darkest_secret {};

public:

	Contact();
	Contact(
		std::string f1,
		std::string f2,
		std::string f3,
		std::string f4,
		std::string f5
	);
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nick_name() const;
	std::string get_phone_num() const;
	std::string get_darkest_secret() const;
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nick_name(std::string nick_name);
	void set_phone_num(std::string phone_num);
	void set_darkest_secret(std::string darkest_secret);
};

#endif