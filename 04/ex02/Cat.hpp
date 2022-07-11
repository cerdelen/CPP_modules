/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:17 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:18 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain	*brain_;
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();

		Cat&	operator=(const Cat& copy);
		void	makeSound( void ) const;
		std::string		getIdea(int i);
		void			setIdea(int i, std::string idea);
};




#endif