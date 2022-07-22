/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:29 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/21 11:32:58 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();


	Weapon  club2 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(&club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();
}
