/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:58 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:01:59 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*brain_;
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		Dog&	operator=(const Dog& copy);
		void	makeSound( void ) const ;
		std::string		getIdea(int i);
		void			setIdea(int i, std::string idea);
};

#endif