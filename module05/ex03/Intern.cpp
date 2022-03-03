#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern & copy)
{
	*this = copy;
}

Intern::~Intern()
{
}

Intern const & Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return *this;
}

Form *cloneShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *cloneRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *clonePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	const std::string	FormNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	cloneFunPtr 		cloneForms[3] = {&cloneShrubbery, &cloneRobotomy, &clonePresidential};

	for (size_t i = 0; i < 3; i++)
	{
		if (formName == FormNames[i])
			return (cloneForms[i](target));
	}
	return nullptr;
}
