#include "ClapTrap.hpp"

int main()
{
	ClapTrap	t1("LoL");

	t1.attack("Knoodle");
	t1.beRepaired(2);
	t1.takeDamage(2);
	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);

	t1.takeDamage(1);
	t1.takeDamage(1);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.beRepaired(2);
	t1.takeDamage(1);
}