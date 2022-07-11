/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:44 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:01:45 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();

		Animal&			operator=(const Animal& copy);
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif