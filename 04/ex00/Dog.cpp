/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:33 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:01:34 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type_ = "Dog";
	std::cout << "Default Dog cconstructor!" << std::endl;
}

Dog::~Dog(){
	std::cout << "Default Dog Deconstructor!" << std::endl;
}

Dog::Dog(const Dog& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& copy){
	type_ = copy.type_;
	std::cout << "Equal sign operator overload called" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof woof!" << std::endl;
}
