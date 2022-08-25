/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:56 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/21 15:42:16 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


// AForm::AForm( void ): req_grad_sign(0), req_grad_exec(0){

// }


AForm::AForm(std::string name, int s_req, int e_req): name_(name), is_signed(false), req_grad_sign(s_req), req_grad_exec(e_req){
	if (req_grad_exec < 1 || req_grad_sign < 1)
		throw AForm::GradeTooHighException();
	if (req_grad_exec > 150 || req_grad_sign > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(){
	
}

AForm::AForm(const AForm& copy): req_grad_sign(copy.getSignreq()), req_grad_exec(copy.getExecreq()){
	*this = copy;
}

std::string		AForm::getName( void ) const{
	return (name_);
}

void		AForm::setSign(bool change){
	is_signed = change;
}

AForm&		AForm::operator=(const AForm &copy){
	is_signed = copy.getSign();
	return (*this);
}

bool			AForm::getSign( void ) const{
	return (is_signed);
}

int				AForm::getSignreq( void ) const{
	return (req_grad_sign);
}

int				AForm::getExecreq( void ) const{
	return (req_grad_exec);
}

void			AForm::beSigned( const Bureaucrat& bur){
	if (bur.getGrade() <= req_grad_sign)
		setSign(true);
	else
		throw AForm::GradeTooLowException();
}

const char	*AForm::GradeTooHighException::what( void ) const throw(){
	return ("Grade is too damn high!");
}

const char	*AForm::GradeTooLowException::what( void ) const throw(){
	return ("Grade is too damn low!");
}

void			AForm::execute( const Bureaucrat& bur){
	if (bur.getGrade() <= req_grad_exec && this->is_signed)
		this->execution(bur);
	else	
	{
		if (!(this->is_signed))
		{
			std::cout << "Form must be signed before execution!" << std::endl;
			return ;
		}
		throw AForm::GradeTooLowException();
	}
}
