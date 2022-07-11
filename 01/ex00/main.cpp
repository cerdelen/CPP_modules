/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:23 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:57:24 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"


int	main()
{
	Zombie	*ptr;
	
	ptr = newZombie("Old_Man");
	ptr->announce();
	delete ptr;
	randomChump("Knoodle");
}