/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:08 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:09 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>

class AAnimal
{
	protected:
		std::string	type_;
	public:
		AAnimal();
		AAnimal(const AAnimal& copy);
		virtual ~AAnimal();

		AAnimal&				operator=(const AAnimal& copy);
		std::string				getType( void ) const;
		virtual void			makeSound( void ) const = 0;
		virtual std::string		getIdea(int i) = 0;
		virtual void			setIdea(int i, std::string idea) = 0;
};

#endif