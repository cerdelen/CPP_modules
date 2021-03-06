/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:17 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/20 18:46:16 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	amt = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::push_new_cont(Phonebook *a, Contact last_cont)
{
	if (a->amt != 8)
		a->amt++;
	for (int i = 7; i > 0; i--)
	{
		if (i <= a->amt)
		a->c_list[i] = a->c_list[i - 1];
	}
	a->c_list[0] = last_cont;
};

bool	is_allnum(std::string c)
{
	for(int i = 0; c[i]; i++)
		if (c[i] < 47 || c[i] > 58)
			return (false);
	return (true);
}

void	Phonebook::add_cont( void )
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string secret;
	std::string number;

	std::cout << "Please give in following Information:" << std::endl << "First Name:" << std::endl;
	std::getline(std::cin, f_name);
	while (f_name.size() == 0)
		std::getline(std::cin, f_name);
	std::cout << "Last Name:" << std::endl;
	while (l_name.size() == 0)
		std::getline(std::cin, l_name);
	std::cout << "Nickname:" << std::endl;
	while (n_name.size() == 0)
		std::getline(std::cin, n_name);
	std::cout << "Their darkest secret:" << std::endl;
	while (secret.size() == 0)
		std::getline(std::cin, secret);
	std::cout << "Their phonenumber:" << std::endl;
	while (true)
	{
		std::getline(std::cin, number);
		if (number.size() > 0)
		{
			if (is_allnum(number))
				break ;
			else
				std::cout << "Number can only contain digits!" << std::endl;
		}	
	}
	
	Contact last_cont(f_name, l_name, n_name, secret, number);

	push_new_cont(this, last_cont);
}

void	Phonebook::display_contacts(Phonebook *a)
{
	for (int i = 0; i < this->amt; i++)
	{
		std::cout << "         " << i + 1 << "|";
		a->c_list[i].display_contacts_short();
	}
}

int		Phonebook::check_valid_ind(std::string x)
{
	if (x == "1" || x == "2" || x == "3" || x == "4" || x == "5" || x == "6" || x == "7" || x == "8")
		return (atoi(x.c_str()) - 1);
	else
		return (-1);
}

void	Phonebook::search_cont( void )
{
	int			ind;
	std::string	check;

	if (this->amt == 0)
	{
		std::cout << std::endl<< "No contacts in your phonebook yet!" << std::endl << std::endl;
		return ;
	}
	while (true)
	{
		std::cout << std::endl << "Which contact do you want to see?" << std::endl;
		display_contacts(this);
		std::cin >> check;
		ind	= check_valid_ind(check);
		if (ind != -1 && ind <= this->amt-1)
		{
			this->c_list[ind].display_contact_full();
			break;
		}
		std::cout << std::endl << "Invalid Input!" << std::endl << std::endl;
	}
}
