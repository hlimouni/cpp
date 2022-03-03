#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form *presForm = new PresidentialPardonForm("Target 1");
	Form *roboForm = new RobotomyRequestForm("Target 2");
	Form *shrubForm = new ShrubberyCreationForm("Target 3");
    try
    {
    	Bureaucrat b("Alex", 10);
    	std::cout << "Initial Forms status:" << std::endl;
    	std::cout << *presForm << std::endl;
    	std::cout  << *roboForm << std::endl;
    	std::cout  << *shrubForm << std::endl;
    	std::cout << std::endl;

    	std::cout << "Attempt from "<< b << " to sign the form " << presForm->getName() << std::endl; 
    	b.signForm(*presForm);
		std::cout << "SUCCESS!" << std::endl;

    	std::cout << "\nAttempt from "<< b << " to sign the form " << roboForm->getName() << std::endl; 
    	b.signForm(*roboForm);
		std::cout << "SUCCESS!" << std::endl;
				
    	std::cout << "\nAttempt from "<< b << " to sign the form " << shrubForm->getName() << std::endl; 
    	b.signForm(*shrubForm);
		std::cout << "SUCCESS!" << std::endl;

		std::cout << "\nFinal Forms status:"<< std::endl;
    	std::cout << *presForm << std::endl;
    	std::cout  << *roboForm << std::endl;
    	std::cout  << *shrubForm << std::endl;

    	std::cout << "\nAttempt from "<< b << " to execute the form " << presForm->getName() << std::endl; 
    	b.executeForm(*presForm);
		std::cout << "SUCCESS!" << std::endl;

    	std::cout << "\nAttempt from "<< b << " to execute the form " << roboForm->getName() << std::endl; 
    	b.executeForm(*roboForm);

    	std::cout << "\nAttempt from "<< b << " to execute the form " << shrubForm->getName() << std::endl; 
    	b.executeForm(*shrubForm);
		std::cout << "SUCCESS!" << std::endl;
	
		delete presForm;
		delete roboForm;
		delete shrubForm;
    }
    catch(const std::exception& e)
    {
        std::cout << "FAILLURE!! An exception is catched in main with reason: " << e.what() << std::endl;
		delete presForm;
		delete roboForm;
		delete shrubForm;
    }
    return 0;
}
