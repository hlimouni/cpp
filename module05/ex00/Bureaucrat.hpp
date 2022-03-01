#ifndef __BUREAUCRAT_HPP
#define __BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{

private:
	std::string _name;
	int			_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(int grade);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat const & operator=(Bureaucrat const & rhs);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
	private:
		std::string const _tooHighError;
	
	public:
		GradeTooHighException() : _tooHighError("Grade too high") {}
		const char* what() const _NOEXCEPT { return this->_tooHighError.c_str(); }
		~GradeTooHighException() _NOEXCEPT {}
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string _tooLowError;
	
	public:
		GradeTooLowException() : _tooLowError("Grade too low") {}
		const char* what() const _NOEXCEPT { return this->_tooLowError.c_str(); }
		~GradeTooLowException() _NOEXCEPT {}
	};

	std::string const & getName() const;
	int const &	getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat & Bureaucrat);

#endif