/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:31 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:01:32 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();

		Cat&	operator=(const Cat& copy);
		void	makeSound( void ) const;
};




#endif