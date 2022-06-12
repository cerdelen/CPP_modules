#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default_Scav"){
	hp_ = 100;
	initMana();
	a_dmg_ = 20;
	std::cout << "Default ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	hp_ = 100;
	initMana();
	a_dmg_ = 20;
	std::cout << "String ScavTrap constructor" << std::endl;

}

ScavTrap::~ScavTrap(){
	std::cout << "Default ScavTrap deconstructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (hp_ <= 0)
	{
		std::cout << "Trap " << name_ << " is dead!" << std::endl;
		return ;
	}
	if (mana_ <= 0)
	{
		std::cout << "Trap " << name_ << " has not enough mana to attack " << target << "!" << std::endl;
		return ;
	}
	mana_ -= 1;
	std::cout << "Trap " << name_ << " insults " << target << ", causing " << a_dmg_ << " points of emotional damage!" << std::endl;
}


void	ScavTrap::guardGate(){
	if (hp_ <= 0)
	{
		std::cout << "Trap " << name_ << " is dead!" << std::endl;
		return ;
	}
	if (mana_ <= 0)
	{
		std::cout << "Trap " << name_ << " has not enough mana to activate guarding mode" << "!" << std::endl;
		return ;
	}
	std::cout << "Trap " << name_ << " is now guarding the Gate!" << std::endl;
	mana_ -= 1;
}

void	ScavTrap::initMana( void ){
	mana_ = 50;
}