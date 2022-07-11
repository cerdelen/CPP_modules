/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:31 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:32 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(){
	return (type_);
}

void Weapon::setType(std::string t){
	type_ = t;
}

Weapon::Weapon(std::string t): type_(t)
{
}

Weapon::~Weapon()
{
}