#ifndef P_PARDON_H
#define P_PARDON_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

		const std::string getTarget( void );

		void	execution( const Bureaucrat& bur );
		

	private:
		std::string _target;
};

#endif