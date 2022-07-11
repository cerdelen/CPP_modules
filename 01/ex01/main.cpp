/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:52 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:57:53 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

int	main()
{
	Zombie	*ptr;
	int		amt = 9;
	
	ptr = zombieHorde(amt , "LOL");
	for (int i = 0; i < amt; i++)
		ptr[i].announce();
	delete [] ptr;
}
