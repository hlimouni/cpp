#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

	std::cout << "numbers(6 3 17 9 11) in main subject\n";
    std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
    std::cout << "longest span = " << sp.longestSpan() << std::endl;

	std::cout << "\nrandom 30.000 numbers" << std::endl;
    int n = 30000;
    Span sp1 = Span(n);
	srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int num = rand() % n;
        // std::cout << num << "  " ;
        sp1.addNumber(num);
    }
    std::cout << "shortest span = " << sp1.shortestSpan() << std::endl;
    std::cout << "longest span = " << sp1.longestSpan() << std::endl;


	std::cout << "\ntesting 10 random number with range based addNumber" << std::endl;
    n = 10;
    std::vector<int> vec;
    Span sp2 = Span(n);
    for (int i = 0; i < n; i++)
    {
        int num = rand() % n;
        std::cout << num << "  " ;
        vec.push_back(num);
    }
    std::cout << std::endl;
    sp2.addNumber(vec.begin(),vec.end());
    std::cout << "shortest span = " << sp2.shortestSpan() << std::endl;
    std::cout << "longest span = " << sp2.longestSpan() << std::endl;
}