/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:20 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:21 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
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