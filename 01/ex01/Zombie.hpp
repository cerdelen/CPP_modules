/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:59 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:00 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(){
		name = "";
	};
	Zombie(std::string name);
	~Zombie();
	void	announce(void){
		std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	};
	void	set_name(std::string name){
		this->name = name;
	}
};
