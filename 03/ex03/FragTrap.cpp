#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default_Scav"){
	initHitPoints();
	initDamage();
	mana_ = 100;
	std::cout << "Default FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	initHitPoints();
	initDamage();
	mana_ = 100;
	std::cout << "String FragTrap constructor" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Default FragTrap deconstructor" << std::endl;
}

void	FragTrap::highFiveGuys( void ){
	std::cout << name_ << " requests High-Fives!" << std::endl;
}

void	FragTrap::initHitPoints( void ){
	hp_ = 100;
}

void	FragTrap::initDamage( void ){
	a_dmg_ = 30;
}