/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:21:02 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 23:21:58 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		Bureaucrat bur("Bureaucrat Name", 1);
		RobotomyRequestForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 150);
		RobotomyRequestForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 50);
		RobotomyRequestForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 1);
		PresidentialPardonForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 150);
		PresidentialPardonForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 10);
		PresidentialPardonForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 1);
		ShrubberyCreationForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 150);
		ShrubberyCreationForm form("Form Target1");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;

	{
		Bureaucrat bur("Bureaucrat Name", 140);
		ShrubberyCreationForm form("Form Target2");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl << std::endl;
	
	{
		Bureaucrat bur("Bureaucrat Name", 1);
		ShrubberyCreationForm form("Form Target");
		try{
			bur.signForm(form);
			bur.execForm(form);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}








	return (0);
}