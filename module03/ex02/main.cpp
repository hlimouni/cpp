#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b("Hammadi");
	FragTrap c("Lma3ti");
	FragTrap e("Hadda");
	FragTrap d("Tamou");

	a = e;
	a.attack(d.getName());
	b.attack(c.getName());
	a.takeDamage(23);
	c.takeDamage(12);
	d.beRepaired(100);
	a.beRepaired(22);
	d.beRepaired(22);
	a.highFiveGuys();
	b.highFiveGuys();
	c.highFiveGuys();
	d.highFiveGuys();
	e.highFiveGuys();
}