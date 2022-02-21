#include "FragTrap.hpp"

int main()
{
	FragTrap a("Armin");
	FragTrap b("Eren");
	FragTrap d("Levi");
	FragTrap c("Mikasa");
	FragTrap e("Zeke");
	FragTrap f("Reiner");

	std::cout << std::endl;
	std::cout << "ClapTrap Game begins" << std::endl;
	std::cout << "=====================" << std::endl;
	ClapTrap::fight(d, e);
	ClapTrap::fight(d, e);
	ClapTrap::fight(b, f);
	ClapTrap::fight(f, b);
	e.beRepaired(200);
	b.beRepaired(200);
	std::cout << std::endl;
	a.highFiveGuys();
	f.highFiveGuys();
	std::cout << std::endl;
	std::cout << "Game Summary" << std::endl;
	std::cout << "============" << std::endl;
	a.summary();
	b.summary();
	c.summary();
	d.summary();
	e.summary();
	f.summary();
	std::cout << std::endl;
}