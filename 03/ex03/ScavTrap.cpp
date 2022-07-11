/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:00:58 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:00:59 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

ScavTrap::ScavTrap(const ScavTrap& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& copy){
	name_ = copy.name_;
	hp_ = copy.hp_;
	mana_ = copy.mana_;
	a_dmg_ = copy.a_dmg_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}