#include "Bureaucrat.hpp"

Bureaucrat::GradeTooLowException::GradeTooLowException() : _tooLowError("Grade too Low")
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() _NOEXCEPT
{
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return this->_tooLowError.c_str();
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : _tooHighError("Grade too High")
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() _NOEXCEPT
{
}

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return this->_tooHighError.c_str();
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
}

Bureaucrat::Bureaucrat(int grade)
{
	if (grade < highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const & Bureaucrat::getName() const
{
	return this->_name;
}

int const & Bureaucrat::getGrade() const
{
	return this->_grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	*this = copy;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_grade = rhs._grade;
	this->_name = rhs._name;
	return *this;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == lowestGrade)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat & bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << '.';
	return os;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name <<  " couldn't sign " << form.getName() << " because his " << e.what() << '.' << std::endl;
        throw;
    }
}