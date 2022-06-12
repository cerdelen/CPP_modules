#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap	t2("scavvy");
	FragTrap	t3("Fraggy");


	t2.attack("knoodle");
	t2.guardGate();

	t3.highFiveGuys();
	t3.attack("knussel");
}