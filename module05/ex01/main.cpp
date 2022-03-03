#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
    	Bureaucrat b("Alex", 50);
    	Form f1("'Form A'", 100 , 100);
    	Form f2("'Form B'", 20, 20);

    		try
    		{    
    		    std::cout << "Initial Forms status:"<< std::endl;
    		    std::cout << f1 << std::endl;
    		    std::cout  << f2 << std::endl;
    		    std::cout << std::endl;

    		    std::cout << "Attempt from "<< b << " to sign the form " << f1.getName() << std::endl; 
    		    b.signForm(f1);
				std::cout << "SUCCESS!" << std::endl;
    		    std::cout << "\nAttempt from "<< b << " to sign the form " << f2.getName() << std::endl; 
    		    b.signForm(f2);
				std::cout << "SUCCESS!" << std::endl;
    		}
    		catch(const std::exception& e)
    		{
    		    std::cout << "FAILLURE!! An exception is catched in main with reason: " << e.what() << std::endl;
    		}
			std::cout << "\nFinal Forms status:"<< std::endl;
    		std::cout << f1 << std::endl;
    		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "An exception is catched during construction with the reason: " << e.what() << std::endl;
	}
    return 0;
}
