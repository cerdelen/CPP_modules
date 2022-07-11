/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:01 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:02 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
	Zombie *arr;

	arr = new Zombie[n]; 
	for (int j = 0; j < n; j++)
		arr[j].set_name(name);
	return (arr);
}
