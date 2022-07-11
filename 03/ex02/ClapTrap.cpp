/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:00:25 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:00:26 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): name_(name), hp_(10), mana_(10), a_dmg_(0){
	std::cout << "String ClapTrap constructor has been called for " << name_ << std::endl;
}

ClapTrap::ClapTrap( void ): name_("STANDARD_NAME"), hp_(10), mana_(10), a_dmg_(0){
	std::cout << "Default ClapTrap constructor has been called for " << name_ << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Default ClapTrap deconstructor has been called for " << name_ << std::endl;
}

void	ClapTrap::attack(const std::string& target){
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
	std::cout << "Trap " << name_ << " attacks " << target << ", causing " << a_dmg_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hp_ <= 0)
	{
		std::cout << "Trap " << name_ << " has no health to loose!" << std::endl;
		return ;
	}
	std::cout << "Trap " << name_ << " takes " << amount << " damage, falling from " << hp_ << " to " << hp_ - amount << " Health!" << std::endl;
	hp_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (hp_ <= 0)
	{
		std::cout << "Trap " << name_ << " is dead!" << std::endl;
		return ;
	}
	if (mana_ <= 0)
	{
		std::cout << "Trap " << name_ << " has not enough mana to repair itself!" << std::endl;
		return ;
	}
	std::cout << "Trap " << name_ << " repairs itself for " << amount << " Health-Points, increasing its Health from " << hp_ << " to " << hp_ + amount << " Health!" << std::endl;
	hp_ += amount;
	mana_ -= 1;
}

ClapTrap::ClapTrap(const ClapTrap& copy): name_(copy.name_), hp_(copy.hp_), mana_(copy.mana_), a_dmg_(copy.a_dmg_){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy){
	name_ = copy.name_;
	hp_ = copy.hp_;
	mana_ = copy.mana_;
	a_dmg_ = copy.a_dmg_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}