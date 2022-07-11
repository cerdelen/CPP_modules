/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:01:46 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:01:47 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default Brain constructor called!" << std::endl;
};

Brain::~Brain(){
	std::cout << "Default Brain deconstructor called!" << std::endl;
};

Brain::Brain(const Brain& copy){
	*this = copy;
	std::cout << "Brain copy-constructor called!" << std::endl;

};

Brain&			Brain::operator=(const Brain& copy){
	for (int i = 0; i < 100; i++)
		ideas_[i] = copy.ideas_[i];
	std::cout << "Brain equal-sign operator called!" << std::endl;
	return (*this);
};

std::string		Brain::getIdea(int i){
	return (ideas_[i]);
};

void			Brain::setIdea(int i, std::string idea){
	ideas_[i] = idea;
};