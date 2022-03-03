#ifndef __FORM_HPP
#define __FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

private:
    std::string const _name;
    bool _isSigned;
    int const _signGrade;
    int const _executeGrade;

public:
    Form();
    Form(std::string const & name, int const signGrade, int const executeGrade);
    Form & operator=(Form const & rhs);
    Form(Form const &copy);
    ~Form();

    std::string const & getName() const;
    int const & getSignGrade() const;
    int const & getExecuteGrade() const;
    bool const & isSigned() const;


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


    void beSigned(Bureaucrat const & bureaucrat);
};

std::ostream &operator<<(std::ostream & os, const Form & obj);

#endif