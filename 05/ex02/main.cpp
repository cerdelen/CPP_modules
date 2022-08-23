#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		Bureaucrat guillaume("Guillaume", 1);
		RobotomyRequestForm form("Norminette");
		guillaume.signForm(form);
		guillaume.execForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		PresidentialPardonForm form("Jan");
		guillaume.signForm(form);
		guillaume.execForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		ShrubberyCreationForm form("Backyard");
		guillaume.signForm(form);
		guillaume.execForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		ShrubberyCreationForm form("Backyard");
		guillaume.execForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 150);
		Bureaucrat jan("Jan", 1);
		ShrubberyCreationForm form("Backyard");
		jan.signForm(form);
		guillaume.execForm(form);
	}
	return (0);
}