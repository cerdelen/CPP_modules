/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:11 by cerdelen          #+#    #+#             */
/*   Updated: 2022/07/11 11:58:12 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "The memory address of the string variable = " << &str << std::endl 
		<< "The memory address held by stringPTR = " << ptr << std::endl << 
			"The memory address held by stringREF = " << &ref << std::endl << std:: endl;
	
	std::cout << "The value of the string variable = " << str << std::endl 
		<< "The value pointed to by stringPTR = " << *ptr << std::endl << 
			"The value pointed to by stringREF = " << ref << std::endl;
	
	
}