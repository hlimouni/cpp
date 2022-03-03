#ifndef __SHRUBBERYCREATIONFORM_HPP
#define __SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string const _target;
	static const int sign = 145;
	static const int exec = 137;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm const & operator=(ShrubberyCreationForm const & rhs);
    ShrubberyCreationForm(std::string const & target);
    ShrubberyCreationForm(ShrubberyCreationForm const & copy);
    ~ShrubberyCreationForm();

    void action() const;

};


#endif