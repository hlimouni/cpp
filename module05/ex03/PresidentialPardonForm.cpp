#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
    : Form("PresidentialPardonForm", PresidentialPardonForm::sign, PresidentialPardonForm::exec), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
    :Form(copy), _target(copy._target)
{
}
PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	Form::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::action() const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}