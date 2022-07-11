/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:14 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:15 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(std::string n, Weapon &type){
// 	weap_ = type;
// 	name_ = n;
// };


void	HumanA::setName(std::string name)
{
	name_ = name;
}

HumanA::HumanA(std::string name, Weapon &weapon): weap_(weapon)
{
    setName(name);
}

void	HumanA::attack(){
	std::cout << name_ << " attacks with their " << weap_.getType() << std::endl;
}

HumanA::~HumanA()
{
}