/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:55:59 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/30 16:52:47 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


class AMateria
{
	protected:
		std::string			_type;
	public:
		AMateria();
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);
		AMateria(std::string const &type);
		virtual ~AMateria();

	
		std::string const	&getType() const; //Returns the materia type
		virtual				AMateria* clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif