/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:00:33 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:00:34 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap	t2("scavvy");
	FragTrap	t3("Fraggy");


	t2.attack("knoodle");
	t2.guardGate();

	t3.highFiveGuys();
	t3.attack("knussel");
}