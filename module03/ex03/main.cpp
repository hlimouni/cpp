#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a;
	DiamondTrap b("Hammadi");
	DiamondTrap c("Lma3ti");
	DiamondTrap e("Hadda");
	DiamondTrap d("Tamou");

	a = e;
	a.attack(d.getName());
	b.attack(c.getName());
	// a.takeDamage(23);
	// c.takeDamage(12);
	// d.beRepaired(100);
	// a.beRepaired(22);
	// d.beRepaired(22);
	a.highFiveGuys();
	b.highFiveGuys();
	c.highFiveGuys();
	d.highFiveGuys();
	e.highFiveGuys();

	a.guardGate();
	b.guardGate();
	c.guardGate();
	d.guardGate();
	e.guardGate();

	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	d.whoAmI();
	e.whoAmI();
}