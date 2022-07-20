/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:23 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/20 23:35:23 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"


int	main()
{
	Zombie	*ptr;
	
	ptr = newZombie("Zombie_name");
	ptr->announce();
	delete ptr;
	randomChump("Random_Chump_name");
}