/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:50 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:51 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

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

		//Getters
		std::string		getName( void ) const;
		bool			getSign( void ) const;
		int				getSignreq( void ) const;
		int				getExecreq( void ) const;

		//Setters
		void			setSign(bool change);


		void			beSigned( const Bureaucrat& bur);


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