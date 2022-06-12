#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ScavTrap	t2("scavvy");
	// FragTrap	t3("Fraggy");
	DiamondTrap t4("Diamondy");

	t4.whoAmI();
	t4.attack("yes");

	// t2.attack("knoodle");
	// t2.guardGate();

	// t3.highFiveGuys();
	// t3.attack("knussel");
}