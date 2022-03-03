#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
    : Form("ShrubberyCreationForm", ShrubberyCreationForm::sign, ShrubberyCreationForm::exec), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
    : Form(copy), _target(copy._target)
{
}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file;

    file.open(_target + "_shrubbery");

    if (file.good())
    {
		file << "               ,@@@@@@@," 					<< std::endl;
		file << "       ,,,.   ,@@@@@@/@@,  .oo8888o."  	<< std::endl;
		file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" 	<< std::endl;
		file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"    << std::endl;
		file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"    << std::endl;
		file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"     << std::endl;
		file << "   `&%\\ ` /%&'    |.|        \\ '|8'"       << std::endl;
		file << "       |o|        | |         | |"         << std::endl;
		file << "       |.|        | |         | |"         << std::endl;
		file << "__i \\\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

        file.close();
        std::cout << this->_target << "_shrubbery file created" << std::endl;
    }
}
