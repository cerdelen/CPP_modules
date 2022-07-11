/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:46 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 12:02:47 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name_;
		int					grade_;
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat&		operator=(const Bureaucrat &copy);

		//Getters and Setters
		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		setGrade( int grade );

		//Grade-updaters
		void		incrementGrade( void );
		void		decrementGrade( void );

		void		signForm(Form& form_) const ;
		
		//Exceptions
		class GradeTooHighException : public std::exception{
			private:
				virtual const char *what( void ) const throw();
		};
		class GradeTooLowException : public std::exception{
			private:
				virtual const char *what( void ) const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &bur);

#endif