#ifndef __BUREAUCRAT_HPP
#define __BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

#include "Form.hpp"
class Form;

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
		GradeTooHighException();
		const char* what() const _NOEXCEPT;
		~GradeTooHighException() _NOEXCEPT;
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string _tooLowError;
	
	public:
		GradeTooLowException();
		const char* what() const _NOEXCEPT;
		~GradeTooLowException() _NOEXCEPT;
	};

	std::string const & getName() const;
	int const &	getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	static const int lowestGrade = 150;
	static const int highestGrade = 1;

	void signForm(Form &form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat & Bureaucrat);

#endif