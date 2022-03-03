#include "Form.hpp"

Form::Form(std::string const & name, int const signGrade, int const executeGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (signGrade < Bureaucrat::highestGrade || executeGrade < Bureaucrat::highestGrade)
	{
        throw Form::GradeTooHighException();
	}
    else if (signGrade > Bureaucrat::lowestGrade || executeGrade > Bureaucrat::lowestGrade)
	{
        throw Form::GradeTooLowException();
	}
    else
    {
        // std::cout << "Form named: " << this->_name << " created" << std::endl;
    }
}

Form::Form(Form const & copy) : _name(copy._name), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	*this = copy;
}

Form & Form::operator=(Form const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_isSigned = rhs._isSigned;
	return *this;
}

Form::~Form()
{
}

std::string const &Form::getName() const
{
    return this->_name;
}

int const &Form::getSignGrade() const
{
    return this->_signGrade;
}

int const &Form::getExecuteGrade() const
{
    return this->_executeGrade;
}

bool const &Form::isSigned() const
{
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->_signGrade < bureaucrat.getGrade())
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}

std::ostream &operator<<(std::ostream & os, const Form & obj)
{
    os << "The Form named: " << obj.getName() << " with sign grade: " << obj.getSignGrade() << " and with execute grade: " << obj.getExecuteGrade() << " is" << (obj.isSigned() == true ? " SIGNED" : " NOT SIGNED");
    return (os);
}

Form::GradeTooLowException::GradeTooLowException() : _tooLowError("Grade is too Low")
{
}

Form::GradeTooLowException::~GradeTooLowException() _NOEXCEPT
{
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
	return this->_tooLowError.c_str();
}

Form::GradeTooHighException::GradeTooHighException() : _tooHighError("Grade is too High")
{
}

Form::GradeTooHighException::~GradeTooHighException() _NOEXCEPT
{
}

const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
	return this->_tooHighError.c_str();
}