#include "Form.hpp"


Form::Form(std::string name, int s_req, int e_req): name_(name), is_signed(false), req_grad_sign(s_req), req_grad_exec(e_req){
	if (req_grad_exec < 1 || req_grad_sign < 1)
		throw Form::GradeTooHighException();
	if (req_grad_exec > 150 || req_grad_sign > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){

}

Form::Form(const Form& copy){

}








~Form();
Form&		operator=(const Form &copy);


std::string		getName( void ) const;
bool			getSign( void ) const;
int				getSignreq( void ) const;
int				getExecreq( void ) const;

void			setSignreq( int i ) const;
void			setExecreq( int i ) const;