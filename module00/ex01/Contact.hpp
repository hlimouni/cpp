#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

# define WIDTH 10

class Contact
{

private:

	const size_t	_width {10};
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _phone_num;
	std::string _darkest_secret;
	std::string _data[5];

public:

	Contact();
	Contact(std::string fields[5]);
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
	void print_full_name(int index) const;
	void print_info() const;
	void replace_with(Contact &contact);
};

// class Contact
// {

// public:
// 	std::string _first_name {};
// 	std::string _last_name {};
// 	std::string _nick_name {};
// 	std::string _phone_num {};
// 	std::string _darkest_secret {};
// };

#endif