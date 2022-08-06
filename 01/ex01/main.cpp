/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:52 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/06 16:09:02 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

int	main()
{
	Zombie	*ptr;
	int		amt = 2;
	
	ptr = zombieHorde(amt , "generic_zombie_name");
	for (int i = 0; i < amt; i++)
		ptr[i].announce();
	delete [] ptr;
}
