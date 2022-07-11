/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:00:29 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:00:30 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

FragTrap::FragTrap(const FragTrap& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& copy){
	name_ = copy.name_;
	hp_ = copy.hp_;
	mana_ = copy.mana_;
	a_dmg_ = copy.a_dmg_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}