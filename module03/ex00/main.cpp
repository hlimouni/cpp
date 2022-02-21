#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Armin");
	ClapTrap b("Eren");
	ClapTrap d("Levi");
	ClapTrap c("Mikasa");

	std::cout << std::endl;
	std::cout << "ClapTrap Game begins" << std::endl;
	std::cout << "=====================" << std::endl;
	ClapTrap::fight(a, d);
	ClapTrap::fight(b, c);
	c.beRepaired(100);
	d.beRepaired(200);
	std::cout << std::endl;
	std::cout << "Game Summary" << std::endl;
	std::cout << "============" << std::endl;
	a.summary();
	b.summary();
	c.summary();
	d.summary();
	std::cout << std::endl;
}