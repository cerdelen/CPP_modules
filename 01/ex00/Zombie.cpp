/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:30 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/20 23:39:37 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name){
	name_ = name;
}

Zombie::~Zombie(){
	std::cout << name_ << ": got desroyed!" << std::endl;
}

void	Zombie::announce( void ){
		std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}