/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:00:06 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/09 18:32:36 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	t1("Trappy");

	t1.attack("Knoodle");
	t1.beRepaired(2);
	ClapTrap t2("tommy");
	t2.attack("Lol");
	t2 = t1;
	t2.attack("Lol");
}