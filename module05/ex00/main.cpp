#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("lowest", 150);
		// Bureaucrat b(0);
		Bureaucrat c("highest", 1);
		// Bureaucrat e( 151);
		Bureaucrat f("average", 75);

		// //hightest incrementation
		// std::cout << "before incrementing the Bureaucrat " << c.getName() << std::endl;
		// std::cout << c << std::endl;
		// std::cout << "incrementation try of the Bureaucrat " << c.getName() << std::endl;
		// c.incrementGrade();
		// std::cout << c << std::endl;

		// //lowest decrementation
		// std::cout << "before decrementing " << a.getName() << std::endl;
		// std::cout << a << std::endl;
		// std::cout << "after decrementing " << a.getName() << std::endl;
		// a.decrementGrade();
		// std::cout << a << std::endl;

		//average incrementation
		std::cout << "before incrementing " << f.getName() << std::endl;
		std::cout << f << std::endl;
		std::cout << "incrementation try of the Bureaucrat " << f.getName() << std::endl;
		f.incrementGrade();
		std::cout << f << std::endl;

		//average decrementation
		std::cout << "before decrementing " << f.getName() << std::endl;
		std::cout << f << std::endl;
		std::cout << "after decrementing " << f.getName() << std::endl;
		f.decrementGrade();
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
	return 0;
}