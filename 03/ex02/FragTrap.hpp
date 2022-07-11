/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:00:31 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:00:32 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& copy);
		void	highFiveGuys( void );
};

#endif