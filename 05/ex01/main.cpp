/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:52 by cerdelen          #+#    #+#             */
/*   Updated: 2022/08/24 00:29:15 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat	jack("Jack", 80);
		Form		yikes("yikes", 50, 50);

		try{
			jack.signForm(yikes);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Bureaucrat	jack("Jack", 10);
		Form		yikes("yikes", 50, 50);

		try{
			jack.signForm(yikes);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Bureaucrat	jack("Jack", 80);
		Form		yikes("yikes", 50, 50);

		try{
			yikes.beSigned(jack);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Bureaucrat	jack("Jack", 10);
		Form		yikes("yikes", 50, 50);

		try{
			yikes.beSigned(jack);
			std::cout << "No Error in this Test!" << std::endl;
		}
		catch(std::exception& err){
			std::cout << "Exepction caught: " << err.what() << std::endl;
		}
	}
}