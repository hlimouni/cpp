#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
    : Form("RobotomyRequestForm", RobotomyRequestForm::sign, RobotomyRequestForm::exec) , _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
    :Form(copy), _target(copy._target)
{
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action() const
{
	srand ( time(NULL) );
    if (rand() % 2)
	{
		std::cout << "001010010011100100101010010010001101001001" << std::endl;
        std::cout << this->_target << " has been robotomized SUCESSfully!!" << std::endl;
	}
	else
        std::cout << this->_target << " robotomy FAILED!!" << std::endl;
}