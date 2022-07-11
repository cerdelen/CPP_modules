/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:10 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:57:12 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::Contact(std::string a1, std::string a2, std::string a3, std::string a4, std::string a5)
{
	f_name = a1;
	l_name = a2;
	n_name = a3;
	secret = a4;
	number = a5;
}

Contact::~Contact()
{
}

void	Contact::make_right_aligned(std::string s1){
	if (s1.length() == 10)
		std::cout << s1;
	else if (s1.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << s1[i];
		std::cout << ".";
	}
	else if (s1.length() < 10)
	{
		for (int i = 0; i + s1.length() < 10; i++)
			std::cout << " ";
		std::cout << s1;
	};
}

std::string Contact::get_f_name(){
	return f_name;
}

void	Contact::display_contacts_short(){
	make_right_aligned(f_name);
	std::cout << "|";
	make_right_aligned(l_name);
	std::cout << "|";
	make_right_aligned(n_name);
	std::cout << std::endl;
}

void	Contact::display_contact_full(){
	std::cout << f_name << std::endl << l_name << 
	std::endl << n_name << std::endl<< number << std::endl << secret << std::endl;
}