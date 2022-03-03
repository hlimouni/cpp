#ifndef __PRESIDENTIALPARDONFORM_HPP
#define __PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:
    std::string const _target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const & target);
    PresidentialPardonForm(PresidentialPardonForm const & copy);
    PresidentialPardonForm const & operator=(PresidentialPardonForm const & rhs);
    ~PresidentialPardonForm();

    void action() const;

	static const int sign = 25;
	static const int exec = 5;
};

#endif