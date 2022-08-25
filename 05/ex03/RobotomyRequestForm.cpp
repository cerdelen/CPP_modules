/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:21:15 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 00:21:20 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request", 72, 45), _target(target){
	std::cout << "Robotomy Request Form constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy){
	*this = copy;
	std::cout << "Robotomy Request Form copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Robotomy Request Form deconstructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	this->setSign(other.getSign());
	return (*this);
}

void	RobotomyRequestForm::execution( const Bureaucrat& bur ){
	srand(time(NULL));
	bool success = rand() % 2;
	if (success)
		std::cout << "*Drilling Noise* " << this->_target << "has been robotomized by "<< bur.getName() << "!" << std::endl;
	else
		std::cout << bur.getName() << " tried to robotomize " << this->_target << " but failed!" << std::endl;
}
