#ifndef FORM_H
#define FORM_H

#include <iostream>

class Form
{
	private:
		const std::string	name_;
		bool				is_signed;
		const int			req_grad_sign;
		const int			req_grad_exec;
	public:
		Form(std::string name, int s_req, int e_req);
		Form(const Form& copy);
		~Form();
		Form&		operator=(const Form &copy);

		//Getters and Setters
		std::string	getName( void ) const;
		bool		getSign( void ) const;
		void		getSignreq( void ) const;
		void		getExecreq( void ) const;

		//Exceptions
		class GradeTooLowException : public std::exception{
			private:
				virtual const char *what( void ) const throw();
		};
};

#endif