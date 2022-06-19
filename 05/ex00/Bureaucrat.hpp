#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name_;
		int					grade_;
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat&		operator=(const Bureaucrat &copy);

		//Getters and Setters
		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		setGrade( int grade );

		//Grade-updaters
		void	incrementGrade( void );
		void	decrementGrade( void );
		
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