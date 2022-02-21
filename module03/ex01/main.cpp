#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Armin");
	ScavTrap b("Eren");
	ScavTrap d("Levi");
	ScavTrap c("Mikasa");
	ScavTrap e("Zeke");
	ScavTrap f("Reiner");

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
	c.guardGate();
	d.guardGate();
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