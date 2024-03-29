/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:35 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/23 22:28:52 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		Dog&	operator=(const Dog& copy);
		virtual void	makeSound( void ) const ;
};

#endif