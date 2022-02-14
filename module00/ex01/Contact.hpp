#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {

private:

	const size_t	_width;
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _phone_num;
	std::string _darkest_secret;
	std::string _data[5];

public:

	Contact();
	~Contact() {}
	Contact(std::string fields[5]);
	void print_full_name(int index) const;
	void print_info() const;
	void replace_with(Contact &contact);
};

#endif