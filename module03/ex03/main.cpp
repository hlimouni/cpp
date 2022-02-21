#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Annie");
	DiamondTrap b("Mikasa");
	DiamondTrap c("Armin");

	std::cout << std::endl;
	std::cout << "ClapTrap Game begins" << std::endl;
	std::cout << "=====================" << std::endl;
	ClapTrap::fight(b, a);
	a.beRepaired(200);
	std::cout << std::endl;
	c.highFiveGuys();
	b.guardGate();
	std::cout << std::endl;
	b.whoAmI();
	c.whoAmI();
	std::cout << std::endl;
	std::cout << "Game Summary" << std::endl;
	std::cout << "============" << std::endl;
	a.summary();
	b.summary();
	c.summary();
	std::cout << std::endl;
}