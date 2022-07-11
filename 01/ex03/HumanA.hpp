/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:19 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:20 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string name_;
	Weapon &weap_;
public:
	// HumanA(std::string n, Weapon &type){
	// 	weap_ = type;
	// 	name_ = n;
	// };
	void	setName(std::string name);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
};

#endif