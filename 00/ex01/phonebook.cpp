#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include "phonebook.hpp"


void	push_new_cont(phonebook *a, Contact last_cont)
{
	if (a->amt != 8)
		a->amt++;
	for (int i = 7; i > 0; i--)
	{
		if (i <= a->amt)
		a->c_list[i] = a->c_list[i - 1];
	}
	a->c_list[0] = last_cont;
}

void	add_cont(phonebook *a)
{
	std::string f_name2[100];
	std::string l_name;
	std::string n_name;
	std::string secret;
	std::string number;
	char f_name[100];


	std::cout << "Please give in following Information:" << std::endl << "First Name:" << std::endl;
	std::cin.getline(f_name, 100);
	std::cout << "Last Name:" << std::endl;
	std::cin >> l_name;
	std::cout << "Nickname:" << std::endl;
	std::cin >> n_name;
	std::cout << "Their darkest secret:" << std::endl;
	std::cin >> secret;
	std::cout << "Their phonenumber:" << std::endl;
	std::cin >> number;

	std::cout << "this is their darkest secret:" << secret << std::endl;
	Contact last_cont(f_name, l_name, n_name, secret, number);
	push_new_cont(a, last_cont);
}


void	display_contacts(phonebook *a)
{
	for (int i = 0; i < a->amt; i++)
	{
		std::cout << "         " << i + 1 << "|";
		a->c_list[i].display_contacts_short();
	}
}

int		check_valid_ind(std::string x)
{
	if (x == "1" || x == "2" || x == "3" || x == "4" || x == "5" || x == "6" || x == "7" || x == "8")
		return (atoi(x.c_str()) - 1);
	else
		return (-1);
}

void	search_cont(phonebook *a)
{
	int			ind;
	std::string	check;

	while (true)
	{
		display_contacts(a);
		std::cout << "Which contact do you want to see?" << std::endl;
		std::cin >> check;
		ind	= check_valid_ind(check);
		if (ind != -1)
		{
			a->c_list[ind].display_contact_full();
			break;
		}
	}
}

int main()
{
	phonebook *a;
	a = new phonebook;
	int				commandnr = 0;
	std::string		command = "wait";

	while (true)
	{
		std::cout << "Please enter one of the following commands: \"ADD\" | \"SEARCH\" | \"EXIT\"" << std::endl;
		std::cin >> command;

		if (command == "ADD" || command == "add")
			commandnr = 1;
		else if (command == "SEARCH" || command == "search")
			commandnr = 2;
		else if (command == "EXIT" || command == "exit")
			commandnr = 3;
		else
			commandnr = 0;
		switch (commandnr)
		{
		case 1:
			add_cont(a);
			break;
		case 2:
			search_cont(a);
			break;		
		default:
			break;
		}
		if (commandnr == 3)
			break ;
	}
	delete a;
}
