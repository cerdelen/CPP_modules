/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:27 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/06 16:13:31 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon *weap);
		void	setName(std::string name);
		void	attack(void);
	private:
		std::string		name_;
		Weapon			*weap_;
};

#endif