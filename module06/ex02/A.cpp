#include "A.h"

A::A()
{

}

void A::classType() const
{
	std::cout << "A\n";
}

A::~A()
{
	std::cout << "A destructed" << std::endl;
}