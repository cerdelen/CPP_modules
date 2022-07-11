/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:38 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:57:39 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string name_;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void){
		std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	};
};
