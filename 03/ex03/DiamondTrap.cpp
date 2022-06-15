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

DiamondTrap::DiamondTrap(const DiamondTrap& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy){
	name_ = copy.name_;
	hp_ = copy.hp_;
	mana_ = copy.mana_;
	a_dmg_ = copy.a_dmg_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}