#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_diamond"), diamond_name("Unnamed DiamondTrap"){
	initMana();
	initDamage();
	initHitPoints();
	std::cout << "Default DiamondTrap constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap("Default_diamond"), diamond_name(name){
	initMana();
	initDamage();
	initHitPoints();
	std::cout << "String DiamondTrap constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Default DiamondTrap deconstructor" << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << diamond_name << "'s DiamondTrap name = " << diamond_name<< std::endl << "It's ClapTrap name is = " <<  name_  << std::endl;
}