/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:23 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:24 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string n, Weapon &type){
// 	weap_ = type;
// 	name_ = n;
// };

HumanB::HumanB(std::string name): name_(name)
{
}

void	HumanB::setWeapon(Weapon *weap)
{
	weap_ = weap;
}

void	HumanB::attack(){
	if(weap_ != NULL)
		std::cout << name_ << " attacks with their " << weap_->getType() << std::endl;
}

HumanB::~HumanB()
{
}