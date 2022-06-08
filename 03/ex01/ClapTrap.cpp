#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): name_(name), hp_(10), mana_(10), a_dmg_(0){
	std::cout << "String constructor has been called for " << name_ << std::endl;
}

ClapTrap::ClapTrap( void ): name_("STANDARD_NAME"), hp_(10), mana_(10), a_dmg_(0){
	std::cout << "Default constructor has been called for " << name_ << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Default deconstructor has been called for " << name_ << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (hp_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is dead!" << std::endl;
		return ;
	}
	if (mana_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " has not enough mana to attack " << target << "!" << std::endl;
		return ;
	}
	mana_ -= 1;
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << a_dmg_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hp_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " has no health to loose!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " takes " << amount << " damage, falling from " << hp_ << " to " << hp_ - amount << " Health!" << std::endl;
	hp_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (hp_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is dead!" << std::endl;
		return ;
	}
	if (mana_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " has not enough mana to repair itself!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " repairs itself for " << amount << " Health-Points, increasing its Health from " << hp_ << " to " << hp_ + amount << " Health!" << std::endl;
	hp_ += amount;
	mana_ -= 1;
}
