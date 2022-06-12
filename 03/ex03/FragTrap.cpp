#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default_Scav"){
	hp_ = 100;
	mana_ = 100;
	a_dmg_ = 30;
	std::cout << "Default FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	hp_ = 100;
	mana_ = 100;
	a_dmg_ = 30;
	std::cout << "String FragTrap constructor" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Default FragTrap deconstructor" << std::endl;
}

void	FragTrap::highFiveGuys( void ){
	std::cout << name_ << " requests High-Fives!" << std::endl;
}