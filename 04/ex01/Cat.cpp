/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:50 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/23 23:46:00 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	brain_ = new Brain();
	type_ = "Cat";
	std::cout << "Default Cat constructor!" << std::endl;
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "Default Cat Deconstructor!" << std::endl;
}

Cat::Cat(const Cat& copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& copy){
	*this->brain_ = *copy.brain_;
	type_ = copy.type_;
	std::cout << "Cat Equal sign operator overload called" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "Miau miau!" << std::endl;
}

std::string		Cat::getIdea(int i){
	return (brain_->getIdea(i));
};

void			Cat::setIdea(int i, std::string idea){
	brain_->setIdea(i, idea);
};