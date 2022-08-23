#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name_;
		bool				is_signed;
		const int			req_grad_sign;
		const int			req_grad_exec;
	public:
		// AForm( void );
		AForm(std::string name, int s_req, int e_req);
		AForm(const AForm& copy);

		virtual ~AForm();
		AForm&		operator=(const AForm &copy);

		//Getters
		std::string		getName( void ) const;
		bool			getSign( void ) const;
		int				getSignreq( void ) const;
		int				getExecreq( void ) const;

		//Setters
		void			setSign(bool change);


		void			beSigned( const Bureaucrat& bur);
		void			execute( const Bureaucrat& bur);
		virtual void	execution( const Bureaucrat& bur ) = 0;


		//Exceptions
		class GradeTooLowException : public std::exception{
			private:
				virtual const char *what( void ) const throw();
		};
		class GradeTooHighException : public std::exception{
			private:
				virtual const char *what( void ) const throw();
		};

};

#endif