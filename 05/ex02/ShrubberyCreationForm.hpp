#ifndef SCHRUBBERY_H
#define SCHRUBBERY_H

#include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

		const std::string getTarget( void );

		void	execution( const Bureaucrat& bur );


	private:
		std::string _target;
};

#endif