/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:55 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/23 23:41:11 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	brain_ = new Brain();
	type_ = "Dog";
	std::cout << "Default Dog cconstructor!" << std::endl;
}

Dog::~Dog(){
	delete brain_;
	std::cout << "Default Dog Deconstructor!" << std::endl;
}

Dog::Dog(const Dog& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& copy){
	*this->brain_ = *copy.brain_;
	type_ = copy.type_;
	std::cout << "Dog Equal sign operator overload called" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof woof!" << std::endl;
}

std::string		Dog::getIdea(int i){
	return (brain_->getIdea(i));
};

void			Dog::setIdea(int i, std::string idea){
	brain_->setIdea(i, idea);
};