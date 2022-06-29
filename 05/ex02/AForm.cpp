#include "Form.hpp"


Form::Form(std::string name, int s_req, int e_req): name_(name), is_signed(false), req_grad_sign(s_req), req_grad_exec(e_req){
	if (req_grad_exec < 1 || req_grad_sign < 1)
		throw Form::GradeTooHighException();
	if (req_grad_exec > 150 || req_grad_sign > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){
	
}

Form::Form(const Form& copy): req_grad_sign(copy.getSignreq()), req_grad_exec(copy.getExecreq()){
	*this = copy;
}

std::string		Form::getName( void ) const{
	return (name_);
}

void		Form::setSign(bool change){
	is_signed = change;
}

Form&		Form::operator=(const Form &copy){
	is_signed = copy.getSign();
	return (*this);
}

bool			Form::getSign( void ) const{
	return (is_signed);
}

int				Form::getSignreq( void ) const{
	return (req_grad_sign);
}

int				Form::getExecreq( void ) const{
	return (req_grad_exec);
}

void			Form::beSigned( const Bureaucrat& bur){
	if (bur.getGrade() <= req_grad_sign)
		setSign(true);
	else
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooHighException::what( void ) const throw(){
	return ("Grade is too damn high!");
}

const char	*Form::GradeTooLowException::what( void ) const throw(){
	return ("Grade is too damn low!");
}