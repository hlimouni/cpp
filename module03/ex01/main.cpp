#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b("Hammadi");
	ScavTrap c("Lma3ti");
	ScavTrap e("Hadda");
	ScavTrap d("Tamou");

	a = e;
	a.attack(d.getName());
	b.attack(c.getName());
	a.takeDamage(23);
	c.takeDamage(12);
	d.beRepaired(100);
	a.beRepaired(22);
	d.beRepaired(22);
	a.guardGate();
	b.guardGate();
	c.guardGate();
	d.guardGate();
	e.guardGate();
}