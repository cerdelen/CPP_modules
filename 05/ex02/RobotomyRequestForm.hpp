#ifndef ROBOTOMY_H
#define ROBOTOMY_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

		const std::string getTarget( void );
		void	execution( const Bureaucrat& bur );


	private:
		std::string _target;
};

#endif