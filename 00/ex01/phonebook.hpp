/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:19 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:57:20 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_H
#define PHONE_H

#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

class Phonebook
{
	private:
	public:
		Contact 	c_list[8];
		int			amt;
		Phonebook();
		~Phonebook();


		void	search_cont( void );
		int		check_valid_ind(std::string x);
		void	display_contacts(Phonebook *a);
		void	add_cont( void );
		void	push_new_cont(Phonebook *a, Contact last_cont);




};

#endif