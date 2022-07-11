/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:27 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:28 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string name_;
	Weapon *weap_;
public:
	// HumanA(std::string n, Weapon &type){
	// 	weap_ = type;
	// 	name_ = n;
	// };
	void	setWeapon(Weapon *weap);
	void	setName(std::string name);
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
};

#endif