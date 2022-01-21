#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Hammadi");
	ClapTrap c("Lma3ti");
	ClapTrap e("Hadda");
	ClapTrap d("Tamou");
	ClapTrap m("daghour");
	ClapTrap n(m);

	a = e;
	a.attack(d.getName());
	b.attack(c.getName());
	a.takeDamage(23);
	c.takeDamage(12);
	m.takeDamage(211);
	d.beRepaired(100);
	a.beRepaired(22);
	d.beRepaired(22);
	n.beRepaired(30);
}