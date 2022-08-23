/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:20:52 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 00:20:53 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): name_(name){
	std::cout << "Default Bureaucrat constructor!" << std::endl;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Default Bureaucrat deconstructor!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name_(copy.name_){
	std::cout << "Bureaucrat copy constructor!" << std::endl;
	*this = copy;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &copy){
	std::cout << "Bureaucrat copy operator!" << std::endl;
	setGrade(copy.grade_);
	return (*this);
}


std::string	Bureaucrat::getName( void ) const{
	return (name_);
}

int			Bureaucrat::getGrade( void ) const{
	return (grade_);
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw(){
	return ("Grade is too damn high!");
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw(){
	return ("Grade is too damn low!");
}

void	Bureaucrat::incrementGrade( void ){
	setGrade(grade_ - 1);
}

void	Bureaucrat::decrementGrade( void ){
	setGrade(grade_ + 1);
}

void		Bureaucrat::setGrade( int grade ){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade_ = grade;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &bur){
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (os); 
}

void	Bureaucrat::signForm(AForm& form_) const{
	try
	{
		form_.beSigned(*this);
		std::cout << *this << " signed " << form_.getName() << "!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " could not sign " << form_.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::execForm(AForm& form_) const{
	try
	{
		std::cout << *this << " tries to execute " << form_.getName() << "!" << std::endl;
		form_.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " could not execute " << form_.getName() << " because " << e.what() << std::endl;
	}
}