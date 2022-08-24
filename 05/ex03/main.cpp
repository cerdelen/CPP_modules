/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:21:02 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 17:18:31 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern			intern_;
		Bureaucrat		bur("Bureaucrat Name", 1);
		AForm*			form;
		
		form = intern_.makeForm("robotomy request", "Form Target");
		if (form)
		{
			try{
				bur.signForm(*form);
				bur.execForm(*form);
				std::cout << "No Error in this Test!" << std::endl;
			}
			catch(std::exception& err){
				std::cout << "Exepction caught: " << err.what() << std::endl;
			}
		}
	}
	
	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;
	
	{
		Intern			intern_;
		Bureaucrat		bur("Bureaucrat Name", 1);
		AForm*			form;
		
		form = intern_.makeForm("shrubbery creation", "Form Target");
		if (form)
		{
			try{
				bur.signForm(*form);
				bur.execForm(*form);
				std::cout << "No Error in this Test!" << std::endl;
			}
			catch(std::exception& err){
				std::cout << "Exepction caught: " << err.what() << std::endl;
			}
		}
	}
	
	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;
	
	{
		Intern			intern_;
		Bureaucrat		bur("Bureaucrat Name", 1);
		AForm*			form;
		
		form = intern_.makeForm("presidential pardon", "Form Target");
		if (form)
		{
			try{
				bur.signForm(*form);
				bur.execForm(*form);
				std::cout << "No Error in this Test!" << std::endl;
			}
			catch(std::exception& err){
				std::cout << "Exepction caught: " << err.what() << std::endl;
			}
		}
	}
	
	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;
	
	{
		Intern			intern_;
		Bureaucrat		bur("Bureaucrat Name", 1);
		AForm*			form;
		
		form = intern_.makeForm("wrong name", "Form Target");
		if (form)
		{
			try{
				bur.signForm(*form);
				bur.execForm(*form);
				std::cout << "No Error in this Test!" << std::endl;
			}
			catch(std::exception& err){
				std::cout << "Exepction caught: " << err.what() << std::endl;
			}
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;
	
	return (0);
}