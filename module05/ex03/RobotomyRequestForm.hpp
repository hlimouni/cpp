#ifndef __ROBOTOMYREQUESTFORM_HPP
#define __ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm :public Form
{
private:
    std::string const _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm const & operator=(RobotomyRequestForm const &rhs);
    RobotomyRequestForm(std::string const & target);
    RobotomyRequestForm(RobotomyRequestForm const & obj);
    ~RobotomyRequestForm();

    void action() const;

	static const int sign = 72;
	static const int exec = 45;
};

#endif