/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:33 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/06 16:12:02 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string&		getType();
		void 					setType(std::string t);

	private:
		std::string		type_;
};


#endif