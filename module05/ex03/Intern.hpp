#ifndef INTERN_HPP
#define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & copy);
		Intern const & operator=(const Intern & rhs);
		~Intern();

		Form * makeForm(std::string formName, std::string target);
};

typedef Form* (*cloneFunPtr) (std::string target);

#endif
