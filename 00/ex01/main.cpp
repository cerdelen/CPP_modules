/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:15 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/20 18:31:35 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

// #include

int main()
{
	Phonebook *a;
	a = new Phonebook;
	int				commandnr = 0;
	std::string		command = "wait";

	while (true)
	{
		std::cout << std::endl << "Please enter one of the following commands: \"ADD\" | \"SEARCH\" | \"EXIT\"" << std::endl;
		std::getline(std::cin, command);
		std::cout << std::endl;

		if (command.compare("ADD") == 0|| command.compare("add") == 0)
			commandnr = 1;
		else if (command.compare("SEARCH") == 0|| command.compare("search") == 0)
			commandnr = 2;
		else if (command.compare("EXIT") == 0|| command.compare("exit") == 0)
			commandnr = 3;
		else
			commandnr = 0;
		switch (commandnr)
		{
		case 0:
			std::cout << "Invalid Command!" << std::endl;
			break;
		case 1:
			a->add_cont();
			break;
		case 2:
			a->search_cont();
			break;		
		default:
			break;
		}
		if (commandnr == 3)
			break ;
	}
	delete a;
}
