#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"


Base * generate(void)
{
    srand(time(NULL));
    
    int random = rand() % 3;
    if (random == 0)
        return (new A);
    else if (random == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    A *Aptr = dynamic_cast<A*>(p);

    if (Aptr != nullptr)
    {
        std::cout << "A" << std::endl;
         return ;
    } 

    B *Bptr = dynamic_cast<B*>(p);

    if (Bptr != nullptr)
    {
        std::cout << "B" << std::endl;
         return ;
    } 
    C *Cptr = dynamic_cast<C*>(p);

    if (Cptr != nullptr)
    {
        std::cout << "C" << std::endl;
         return ;
    } 
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
		a.classType();
        return ;
    }
    catch(const std::exception& e)
    {
        // std::cerr << "\nA " << e.what() << '\n';
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        b.classType();
        return ;
    }
    catch(const std::exception& e)
    {
        // std::cerr << "\nB " << e.what() << '\n';
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        c.classType();
         return ;
    }
    catch(const std::exception& e)
    {
        // std::cerr << "\nC " << e.what() << '\n';
    }
}


int main()
{
	std::cout << "Generating a New Derived object\n";
    Base *ptr = generate();

	std::cout << "Identifying the Derived object Type through Base pointer\n";
	std::cout << "Type: ";
    identify(ptr);

	std::cout << "Identifying the Derived object Type through Base reference\n";
	std::cout << "Type: ";
    identify(*ptr);
    
	std::cout << '\n';
	
    delete ptr;
    return 0;
}
