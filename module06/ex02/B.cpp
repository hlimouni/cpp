#include "B.h"

B::B()
{

}

void B::classType() const
{
	std::cout << "B\n";
}


B::~B()
{
	std::cout << "B destructed\n";
}