#include "ClapTrap.hpp"

int main()
{
	ClapTrap	t1("Trappy");

	t1.attack("Knoodle");
	t1.beRepaired(2);
	ClapTrap t2("tommy");
	t2.attack("Lol");
	t2 = t1;
	t2.attack("Lol");


}